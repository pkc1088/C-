#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class ArrayUtility
{
private:

public:
	static int* concat(int s1[], int s2[], int size)
	{
		int j=0, len=size*2;
		int *s3=new int[len];
		
		for(int i=0; i<size; i++)
			s3[i]=s1[i];
		for(int i=size; i<len; i++)
			s3[i]=s2[j++];
		for(int i=0; i<len; i++)
			cout<<s3[i]<<' ';
		
	}
	static int* remove(int s1[], int s2[], int size)
	{
		int k=0, cnt=0, len=size*2;
		int *s3=new int[len];
		for(int i=0; i<size; i++)
			s3[i]=s1[i];
			
		for(int i=0; i<size; i++)
			for(int j=0; j<size; j++)
				if(s3[i]==s2[j])
				{
					for(int p=i; p<size; p++)
						s3[p]=s3[p+1];			
					cnt++;	
				}
				
		cout<<size-cnt<<"°³"<<endl;
		for(int i=0; i<size-cnt; i++)
			cout<<s3[i]<<' ';
	}
};

int main(void)
{
	int x[5];
	int y[5];
	
	for(int i=0; i<5; i++)
		cin>>x[i];
	for(int i=0; i<5; i++)
		cin>>y[i];	
	
	ArrayUtility::concat(x, y, 5);
	cout<<endl;
	ArrayUtility::remove(x, y, 5);


	
    return 0;
}
