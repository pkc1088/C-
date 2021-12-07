#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//두 대의 프린터가 종이 용지만 공유하는 시스템 
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
			cout<<"용지가 부족하여 프린트할 수 없습니다."<<endl;
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
		cout<<"잉크젯 : "<<modelName<<", "<<manufacName
			<<", 남은종이 "<<Printer::pLeft()<<", 남은 잉크"<<InkLeft<<endl; 
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
		cout<<"레이저 : "<<modelName<<", "<<manufacName
			<<", 남은종이 "<<Printer::pLeft()<<", 남은 토너"<<TonerLeft<<endl; 
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
	Controll ctrl("Officejet v40", "HP", 100, "SCX-6x45", "삼성전자", 100);
	int sel, pages;

	while(1)
	{
		cout<<"프린트(1:잉크젯, 2:레이저)와 매수 입력>>";
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


