#include <iostream>
#include <cstring>
#include <string>
using namespace std;

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n)
{
	for(int i=0; i<n; i++)
		dest[i] = (T2)src[i];
}

int main(void)
{
	int x[]={1,2,3,4,5};
	double d[5];
	char c[5]={'H', 'e', 'l', 'l', 'o'};
	char p[5];
	int e[5];

	mcopy(x, d, 5);
	mcopy(c, p, 5);
	mcopy(c, e, 5);
	
	for(int i=0; i<5; i++)
		cout<<d[i]<<' ';
	cout<<endl;
	
	for(int i=0; i<5; i++)
		cout<<p[i]<<' ';
	cout<<endl;

	for(int i=0; i<5; i++)
		cout<<(char)e[i]<<' ';
	cout<<endl;


    return 0;
}

