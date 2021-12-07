#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
 
using namespace std;

class SortedArray
{
private:
	int size;
	int *p;
	void sort() 
	{
    	for (int i = 0; i < size-1; i++) 
        	for (int j = i+1; j < size; j++) 
            	if (p[i] > p[j]) 
				{
                	int temp = p[i];
                	p[i] = p[j];
                	p[j] = temp;
            	}
    }
public:
	SortedArray()
	{
		size=0;
		p=NULL;
	}
	
	SortedArray(SortedArray& src)
	{
		this->size=src.size;
		this->p=new int[src.size];
		for (int i = 0; i < src.size; i++) 
       		p[i] = src.p[i];
    	
		this->sort();
	}
	
	SortedArray(int p[], int size)
	{
		this->size=size;
		this->p=new int[size];
	//	for (int i = 0; i < size; i++) 
    //   		this->p[i] = p[i];			
		this->p=p;	//가능 
		
		this->sort();
	}
	
	SortedArray operator+ (SortedArray& op1)
	{
		SortedArray temp;
		temp.size = this->size + op1.size;
		temp.p=new int[temp.size];
		
		for (int i = 0; i < temp.size; i++) 
		{
        	if (i < this->size)
            	temp.p[i] = this->p[i];
        	//	temp.(p+i)=this->p; 는 불가!!! 
			else 	
            	temp.p[i] = op1.p[i - this->size];
    	}
    	return temp;
	}
	
	SortedArray& operator= (const SortedArray& op2)
	{
		if (this->p)
        	delete[]p;	//c는 첨에 널이였을테니까 그걸 삭제? 
    	this->size = op2.size;
    	this->p = new int[op2.size];
    	//for (int i = 0; i < op2.size; i++) 
        //	this->p[i] = op2.p[i];
		this->p=op2.p;
    	
		this->sort(); 
  
    	return *this;
	}
	
	void show()
	{
		cout<<"배열 출력 : ";
		for(int i=0; i<size; i++)
			cout<<*(p+i)<<' '; 
		cout<<endl;
	}
};

int main(void)
{
	int n[]= {2, 20, 6};
	int m[]= {10, 7, 8, 30};
	SortedArray a(n,3), b(m,4), c;
	c=a+b;
	a.show();
	b.show();
	c.show();

    return 0;
}

