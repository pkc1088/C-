#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<class T1, class T2>
bool equalArr(T1 a[], T2 b[], int c) 
{
 for (int i = 0; i < c; i++) 
	if (a[i] != b[i])
		return false;
 
 return true;
}

int main(void)
{
	int x[] = {1, 10, 100, 5, 4};
	int y[] = {1, 10, 100, 5, 4};
	if(equalArr(x, y, 5))
	cout << "같다" << endl; 
	else
	cout << "다르다" << endl; 
		
    return 0;
}
