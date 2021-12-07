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
//	Base base;	//	Base base(); 는 Base클래스의 void함수호출인거임.. 
	Base base;
//	base.a=11; 불가 
	base.showA();
	Derived derived(2);

    return 0;
}

