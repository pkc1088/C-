#include <iostream>
#include <cstring>
using namespace std;

class First
{
	public:
		virtual void simplefunc()	
		{cout<<"First"<<endl;}
};

class Second: public First
{
	public:
		virtual void simplefunc()	
		{cout<<"Second"<<endl;}
};

int main(void)
{
	First *ptr=new First();
	ptr->simplefunc();
	delete ptr;
	
	ptr=new Second();
	ptr->simplefunc();
	delete ptr;
	
	return 0;
}
