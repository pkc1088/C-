#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//�� ���� �����Ͱ� ���� ������ �����ϴ� �ý��� 
class Printer
{
private:
	int printLeft=100; 
public:
	Printer()
	{}

	void xPrinter(int pages)
	{
		printLeft-=pages;
	}
	
	bool LeftCheck(int pages)
	{
		if(printLeft-pages<0)
		{
			cout<<"������ �����Ͽ� ����Ʈ�� �� �����ϴ�."<<endl;
			return false;
		}
	
		return true;
	}
	
	int pLeft()			
	{
		return printLeft;
	}

};


class InkPrinter : virtual public Printer
{
private:
	string modelName;
	string manufacName;
	int InkLeft;
public:
	InkPrinter(string model, string manufac, int inkAmount) : Printer()
	{
		modelName=model;
		manufacName=manufac;
		InkLeft=inkAmount;
	}
	
	void show(int pages)
	{
		InkLeft-=pages;
		cout<<"��ũ�� : "<<modelName<<", "<<manufacName
			<<", �������� "<<Printer::pLeft()<<", ���� ��ũ"<<InkLeft<<endl; 
	}
	
};


class LaserPrinter : virtual public Printer
{
private:
	string modelName;
	string manufacName;
	int TonerLeft;
public:
	LaserPrinter(string model, string manufac, int tonerAmount) : Printer()
	{
		modelName=model;
		manufacName=manufac;
		TonerLeft=tonerAmount;
	}
	
	void show(int pages)
	{
		TonerLeft-=pages;
		cout<<"������ : "<<modelName<<", "<<manufacName
			<<", �������� "<<Printer::pLeft()<<", ���� ���"<<TonerLeft<<endl; 
	}
};

class Controll : public InkPrinter, public LaserPrinter
{
public:
	Controll(string inkmodel, string inkmanufac, int inkAmount, string tonermodel, string tonermanufac, int tonerAmount) 
	: InkPrinter(inkmodel, inkmanufac, inkAmount), LaserPrinter(tonermodel, tonermanufac, tonerAmount)
	{}
	
	void inkshow(int pages)
	{
		if(!Printer::LeftCheck(pages))
		{
			return;
		}
		Printer::xPrinter(pages);
		InkPrinter::show(pages);
		LaserPrinter::show(0);
	}
	
	void tonershow(int pages)
	{
		if(!Printer::LeftCheck(pages))
		{
			return;
		}
		Printer::xPrinter(pages);
		InkPrinter::show(0);	
		LaserPrinter::show(pages);	
		
	}
	
};

void Run()
{ 
	Controll ctrl("Officejet v40", "HP", 100, "SCX-6x45", "�Ｚ����", 100);
	int sel, pages;

	while(1)
	{
		cout<<"����Ʈ(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin>>sel>>pages;
		if(sel==1)
		{
			ctrl.inkshow(pages);
		}
		if(sel==2)
		{
			ctrl.tonershow(pages);
		}
		
		cout<<endl;		
	}
}

int main(void)
{
	Run();
    return 0;
}


