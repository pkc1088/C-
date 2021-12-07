#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class First
{
	public:
		void func()	{cout<<"First"<<endl;}
};

class Second : public First
{
	public:
		void func()	{cout<<"Second"<<endl;}
		void func2(){cout<<"Second2"<<endl;}
};

class Third : public Second 
{
	public:
		void func()	{cout<<"Third"<<endl;}
		void func2() {cout<<"Third2"<<endl;}
};				

int main(void)
{
//	Second *second = new First(); 불가 
	
	First NonPointerfirst; NonPointerfirst.func();
	
	First *first = new Third();
	first->func();	
	
//  first->func2(); 불가 	
//	Third *third = first; 불가 
	
	Second *second = new Third();
	second->func(); 	
	
	Third *third;
	third->func2(); 
	second=third;
	third->func2();
	second->func2();
	
	 
	return 0;
}
