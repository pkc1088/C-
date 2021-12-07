#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
using namespace std;

int main(void)
{
	srand((unsigned int)time(0));
	int i=rand()%256;
	int j=rand()%256;
	int a=2, b=3232,c=a|b;
	cout<<c<<endl;
	
	cout<<i<<' ' <<j;

    return 0;
}

