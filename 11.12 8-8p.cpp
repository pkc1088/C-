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
		printLeft=pCnt; //인쇄할 종이 
		availLeft=aCnt; //남은 종이 
	}
	
	char* getName()			{return modelName;}
	
	char* getManufac()		{return manufacName;}
	
	bool LeftCheck(int pages)
	{
		if(printLeft-pages<0)
		{
			cout<<"용지가 부족하여 프린트할 수 없습니다."<<endl;
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
			cout<<"잉크젯 : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", 남은종이 "<<Printer::pLeft(pages)<<", 남은 잉크"<<Printer::aLeft(pages)<<endl; 
			return ;
		}
		cout<<"잉크젯 : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", 남은종이 "<<Printer::pLeft(0)<<", 남은 잉크"<<Printer::aLeft(0)<<endl; 
		
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
			cout<<"레이저 : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", 남은종이 "<<Printer::pLeft(pages)<<", 남은 토너"<<Printer::aLeft(pages)<<endl; 
			return ;
		}
		cout<<"레이저 : "<<Printer::getName()<<", "<<Printer::getManufac()
			<<", 남은종이 "<<Printer::pLeft(0)<<", 남은 토너"<<Printer::aLeft(0)<<endl; 
	}
};

void Run()
{
	InkPrinter ip("Officejet v40", "HP", 5, 10);
	LaserPrinter lp("SCX-6x45", "삼성전자", 3, 20); 
	int sel, pages;
	char keepgoing;

	cout<<"현재 작동중이 2대의 프린터는 아래와 같다"<<endl;
	ip.show(0);
	lp.show(0);
	cout<<endl;
	while(1)
	{
		
		cout<<"프린트(1:잉크젯, 2:레이저)와 매수 입력>>";
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
		
		cout<<"계속 프린트 하시겠습니까(y/n)>>";
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

