#include <iostream>
using namespace std;

namespace Ns1 
{
	void Func1(void)
	{
		cout<<"called by Ns1 Func1"<<endl;
	}
}
namespace Ns2 
{
	void Func1(void)
	{
		cout<<"called by Ns2 Func1"<<endl;
	}
}
int main(void)
{
	Ns1::Func1();
	Ns2::Func1();
	using Ns2::Func1;
	Func1();
	
	
	return 0;
}
