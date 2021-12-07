#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int num1=10;
	
	int *ptr=&num1;
	int &num2=num1;
	int *ptr2=&num2;
	int num3=num2;
	int *ptr3=&num3;
	num2+=20;
	
	cout<<*ptr2<<' '<<num3<<' '<<*ptr3<<endl;
	cout<<*ptr<<' '<<num1<<' '<<num2<<' '<<&num2<<endl;
	return 0;
}
