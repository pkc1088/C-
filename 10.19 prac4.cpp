#include <iostream>
using namespace std;

int val=100;
 
int main(void)
{
	int val=20;
	val+=3;
	::val+=7;

	cout<<val<<endl;
	cout<<::val<<endl;
		
	return 0;
}
