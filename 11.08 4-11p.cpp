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
			cout<<"���ᰡ �����մϴ�"<<endl;
			return;
		} 
		cout<<"���������� �弼��"<<endl;
		tong[0].consume();
		tong[1].consume();
	}
	
	void selectAmericano()
	{	
		if(tong[0].getSize() < 1 || tong[1].getSize() < 2)
		{
			cout<<"���ᰡ �����մϴ�"<<endl;
			return;
		}
		cout<<"�Ƹ޸�ī�� �弼��"<<endl; 
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
	
	void selectSugarCoffee()
	{
		if(tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1)
		{
			cout<<"���ᰡ �����մϴ�"<<endl;
			return;
		}
		cout<<"����Ŀ�� �弼��"<<endl; 
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
		cout<<"Ŀ�� "<<tong[0].getSize();
		cout<<", �� "<<tong[1].getSize();
		cout<<", ���� "<<tong[2].getSize(); 
		cout<<endl;
	}
	
	void run()
	{
		int select;
		cout<<"*** Ŀ�����Ǳ⸦ �۵��մϴ�***"<<endl;
		while(1)
		{
			cout<<"�޴��� �����ּ���(1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ�����, 5: ä���)>>"; 
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

