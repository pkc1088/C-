#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class MyInStack
{
private:
	int p[10];
	int tos;
public:
	MyInStack()
	{
		tos = 0;
	}
	bool push(int n)
	{
		if(tos==10)
		{
			return false;
		}
		p[tos]=n;
		tos++;
		return true;
	}
	bool pop(int &n)
	{
		if(tos==0)
		{
			return false;
		}
		tos--;
		n=p[tos];
		return true;
	}
};

int main(void) {
	MyInStack a;
	for(int i=0; i<11; i++) 
	{ 
		if(a.push(i)) 
			cout << i << ' '; 
		else 
			cout << endl << i+1 << " 번째 stack full" << endl;
	}
	int n;
	for(int i=0; i<11; i++) 
	{ 
		if(a.pop(n)) 
			cout << n << ' '; 
		else 
			cout << endl << i+1 << " 번째 stack empty";
	}
	cout << endl;
	
	return 0; 
}

