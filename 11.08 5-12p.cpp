#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Dept
{
private:
	int size;
	int *scores;
public:
	Dept(int size)
	{
		this->size = size;
		scores = new int[size];
	}
	
	~Dept() { delete[]scores; }
	
/*	Dept(const Dept& dept)
	{
		this->size = dept.size;
		this->scores = new int[dept.size];
		for(int i=0; i<size; i++)
			this->scores[i] = dept.scores[i];	
	}
*/	
	int getSize() {return size;}
	
	void read()
	{
		int sco;
		for(int i=0; i<size; i++)
		{
			cin>>sco;
			*(scores+i)=sco;
		}
	}
	
	bool isOver60(int index)
	{
		if( *(scores+index) > 60 )
			return true;
			
		return false;
	}
};

int countPass(Dept &dept)
{
	int count = 0;
	for(int i=0; i<dept.getSize(); i++)
		if(dept.isOver60(i))
			count++;
	
	return count;
}

int main(void)
{
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout<<"60점 이상은 "<<n<<"명"; 

    return 0;
}

