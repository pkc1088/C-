#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Printer
{
private:
	char *modelName;
	char *manufacName;
	int printLeft, availLeft;
public:
	Printer(char* model, char* manufac, int pCnt, int aCnt)
	{
		modelName=model;
		manufacName=manufac;
		printLeft=pCnt; //�μ��� ���� 
		availLeft=aCnt; //���� ���� 
	}
	
	char* getName()			{return modelName;}
	
	char* getManufac()		{return manufacName;}
	
	bool LeftCheck(int pages)
	{
		if(printLeft-pages<0)
		{
			cout<<"������ �����Ͽ� ����Ʈ�� �� �����ϴ�."<<endl;
			return false;
		}
		return true;
	}
	
	int pLeft(int pages)			
	{
		
		printLeft-=pages;
		return printLeft;
	}
	
	int aLeft(int pages)
	{
		availLeft-=pages;
		return availLeft;
	}
	
};


class InkPrinter : public Printer
{

public:
	InkPrinter(char* model, char* manufac, int pCnt, int aCnt) 
		: Printer(model, manufac, pCnt, aCnt)
	{}

	void show(int pages)
	{
		if(Printer::LeftCheck(pages))
		{
			cout<<"��ũ�� : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", �������� "<<Printer::pLeft(pages)<<", ���� ��ũ"<<Printer::aLeft(pages)<<endl; 
			return ;
		}
		cout<<"��ũ�� : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", �������� "<<Printer::pLeft(0)<<", ���� ��ũ"<<Printer::aLeft(0)<<endl; 
		
	}
	
};


class LaserPrinter : public Printer
{

public:
	LaserPrinter(char* model, char* manufac, int pCnt, int aCnt) 
		: Printer(model, manufac, pCnt, aCnt)
	{}
	
	void show(int pages)
	{
		if(Printer::LeftCheck(pages))
		{
			cout<<"������ : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", �������� "<<Printer::pLeft(pages)<<", ���� ���"<<Printer::aLeft(pages)<<endl; 
			return ;
		}
		cout<<"������ : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", �������� "<<Printer::pLeft(0)<<", ���� ���"<<Printer::aLeft(0)<<endl; 
	}
};

void Run()
{
	InkPrinter ip("Officejet v40", "HP", 5, 10);
	LaserPrinter lp("SCX-6x45", "�Ｚ����", 3, 20); 
	int sel, pages;
	char keepgoing;

	cout<<"���� �۵����� 2���� �����ʹ� �Ʒ��� ����"<<endl;
	ip.show(0);
	lp.show(0);
	cout<<endl;
	while(1)
	{
		
		cout<<"����Ʈ(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin>>sel>>pages;
		if(sel==1)
		{
			ip.show(pages);
			lp.show(0);
		}
		if(sel==2)
		{
			ip.show(0);
			lp.show(pages);
		}
		
		cout<<"��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin>>keepgoing;
		cout<<endl; 
		if(keepgoing=='n')
			break;
	}
}

int main(void)
{
	Run();
    return 0;
}

