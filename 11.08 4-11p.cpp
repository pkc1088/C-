#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Container
{
private:
	int size;
public:
	Container() 
	{
		size=10;
	}
	void fill()
	{
		size=10;
	}
	void consume()
	{
		size-=1;
	}
	int getSize()
	{
		return size;
	}
};


class CoffeeVendingMachine
{
private:
	Container tong[3];
public:

	void selectEspresso()
	{
		if(tong[0].getSize() < 1 || tong[1].getSize() < 1)
		{
			cout<<"원료가 부족합니다"<<endl;
			return;
		} 
		cout<<"에스프레소 드세요"<<endl;
		tong[0].consume();
		tong[1].consume();
	}
	
	void selectAmericano()
	{	
		if(tong[0].getSize() < 1 || tong[1].getSize() < 2)
		{
			cout<<"원료가 부족합니다"<<endl;
			return;
		}
		cout<<"아메리카노 드세요"<<endl; 
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
	
	void selectSugarCoffee()
	{
		if(tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1)
		{
			cout<<"원료가 부족합니다"<<endl;
			return;
		}
		cout<<"설탕커피 드세요"<<endl; 
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();		
	}
	
	void fill()
	{
		tong[0].fill();
		tong[1].fill();
		tong[2].fill();
	}
	
	void show()
	{
		cout<<"커피 "<<tong[0].getSize();
		cout<<", 물 "<<tong[1].getSize();
		cout<<", 설탕 "<<tong[2].getSize(); 
		cout<<endl;
	}
	
	void run()
	{
		int select;
		cout<<"*** 커피자판기를 작동합니다***"<<endl;
		while(1)
		{
			cout<<"메뉴를 눌러주세요(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기)>>"; 
			cin>>select;
			switch(select)
			{
				case  1 :
					selectEspresso();		break;
				case  2 :
					selectAmericano();		break;
				case  3 :
					selectSugarCoffee();	break;
				case  4 :
					show();					break;
				case  5 :
					fill();					break;
			}
		}
	}
};


int main(void)
{
	CoffeeVendingMachine cvm;
	cvm.run(); 
	
    return 0;
}

