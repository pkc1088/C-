#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class Base
{
	public:
		virtual void func()	
		{
			cout<<"Base Function"<<endl;
		}
};

class Derived : public Base
{
	public:
		virtual	void func()	
		{
			cout<<"Derived Function"<<endl;
		}
};

void show(Base *instance)	//virtual 아닐때 
{							//Derived *instance였으면 Derived func가 호출 
	instance->func();
}

int main(void)
{	
//	Derived instance;
//	show(&instance);

/*	Base *instance;
	instance->func();
	Derived *instance2;
	instance2->func();*/
	
//	Base *bas1=new Derived();	
	
	Derived *der1=new Derived();
	Base *bas1=der1;

	bas1->func();
	der1->func();
	
	return 0;
}



