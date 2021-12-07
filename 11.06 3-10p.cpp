#include <iostream>
#include <cstring>
using namespace std;

class Add
{
private:
	int a;
	int b;
public:
	Add(){
	}
	void setValue(int x, int y) 
	{
		a=x;
		b=y;
	}
	
	void calculate()
	{
	cout<<a+b;	
	}
};

int main(void)
{
	int num1, num2;
	char op;
	
	cin>>num1>>num2>>op;
	if(op=='+')
		{
		Add add;
		add.setValue(num1, num2);
		add.calculate();
		}

    return 0;
}

