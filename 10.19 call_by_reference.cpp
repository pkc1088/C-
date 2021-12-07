#include <iostream>
using namespace std;

void SwapReference(int &ref1, int &ref2)
{
	int temp=ref1;
	ref1=ref2;
	ref2=temp;
}
void SwapPointer(int *(&pref1), int *(&pref2))	//&•ûµµ µÊ 
{
	int temp=*pref1;
	*pref1=*pref2;
	*pref2=temp;
}	//³» ²¨ 
void SwapPointer2(int *(&pref1), int *(&pref2)) //&•û¸é ¾ÈµÊ 
{
	int *temp=pref1;
	pref1=pref2;
	pref2=temp;
}	//À±¼º¿ì ²¨ 
int main(void)
{
	int val1=10;
	int val2=20;
	int *ptr1=&val1;
	int *ptr2=&val2;

	SwapReference(val1, val2);
	cout<<"val1: "<<val1<<endl;
	cout<<"val2: "<<val2<<endl<<endl;
	SwapPointer(ptr1, ptr2);
	cout<<"val1: "<<*ptr1<<endl;
	cout<<"val2: "<<*ptr2<<endl<<endl;
	SwapPointer2(ptr1, ptr2);
	cout<<"val1: "<<ptr1<<endl;
	cout<<"val2: "<<ptr2<<endl<<endl;
	return 0;
}
