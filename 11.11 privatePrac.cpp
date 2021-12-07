#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Base
{
private:
	int a;
public:
	Base()
	{
		cout<<a<<endl;
	}
	Base(int x) : a(x)
	{
		cout<<a;
	}
	void showA()
	{
		cout<<a<<endl;
	}
};
class Derived : private Base
{
private:
	int b;
public:
	Derived(int x) : Base(x)
	{
	}
	void showB()
	{
		cout<<b;
	}
};

int main(void)
{
//	Base base;	//	Base base(); �� BaseŬ������ void�Լ�ȣ���ΰ���.. 
	Base base;
//	base.a=11; �Ұ� 
	base.showA();
	Derived derived(2);

    return 0;
}

