/*#include <stdio.h>

int main(void)
{
	char *ptr="COMPUTER";
	char b[5]="abcd";
	char *a=b;
	
	printf("%s\n", ptr);
	printf("%c\n", *ptr);
	return 0;
}*/

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char *ptr="COMPUTER";
	char b[5]="abcd";
	char *a=b;
	
	cout<<*ptr<<' '<<ptr<<endl;
	cout<<*a<<' '<<a<<endl;
	cout<<'*';    
	
	return 0;
}

