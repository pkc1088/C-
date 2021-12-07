#include <iostream>
#include <cstring>
using namespace std;

int num3=0;

void show(void)
{
	static int num1=0;
		   int num2=0;
	
	num1+=1;	num2+=1;	num3+=1;
	
	cout<<"정적변수: "<<num1<<" , "<<"지역변수: "<<
			num2<<" , "<<"전역변수 : "<<num3<<endl;
}
int main(void)
{
	show();
	show();
	show();
	show();
	
    return 0;
}

