#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

int * remove(int src[], int sizeSrc, int minus[], int sizeMinus, int &retSize)
{
	for(int i=0; i<sizeSrc; i++)
		for(int j=0; j<sizeMinus; j++)
			if(src[i]==minus[j])
			{
				retSize++;
				for(int k=i; k<sizeSrc; k++)
					src[k]=src[k+1];
			}
			
	return src;
}
int main(void)
{
	int src[]={1,2,3,4,5};
	int len=sizeof(src) / sizeof(int); 
	int minus[]={2,3};
	int retSize=0;
	
	remove(src, 5, minus, 2, retSize); 

	for(int i=0; i<len-retSize; i++)
		cout<<*(src+i)<<' ';
    
	
	return 0;
}

