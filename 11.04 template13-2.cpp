#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T SumArray(T arr[], T len)
{
	T sum=0;
	for(T i=0; i<len; i++)
		sum+=arr[i];
	return sum;
}

int main(void)
{
	int arr[]={1,2,3,4,5};
	cout<<SumArray<int>(arr,5);
    return 0;
}

