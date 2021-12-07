#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int num=10;
	int *ptr=&num;
	int &ref=*ptr;
	int *(&pref)=ptr;
	cout<<ref<<' '<<*pref<<endl;
	
	return 0;
}
