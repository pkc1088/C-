#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<class T>
T biggest(T *a, int b) 
{
 T max = 0;
 for (int i = 0; i < b; i++) 
 {
  if (max < a[i])
   max = a[i];
 }
 return max;
}

int main(void)
{
	int x[] = {1, 10, 100, 5, 4};
	cout << biggest(x, 5) << endl; 
		
    return 0;
}

