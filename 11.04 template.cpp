#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	cout<<"Template Func"<<endl;
	return num1+num2;
}

int Add(int num1, int num2)
{
	cout<<"Normal Func"<<endl;
	return num1+num2;
}

int main(void)
{
	cout<<Add<int>(75 , 24)<<endl; 
 	cout<<Add(10 , 2)<<endl;
	
	
	return 0;
}

