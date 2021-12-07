#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int num=10;
	int *ptr=&num;
	int **dptr=&ptr;
	
	int &ref=num;
	int *(&pref)=ptr;
	int **(&dpref)=dptr;
	
	int	*mm=&ref;
	cout<<*mm<<endl;
	
	cout<<*ptr<<' '<<**dptr<<endl;
	cout<<ref<<' '<<*pref<<' '<<**dpref<<endl;
	
	return 0;	
}
