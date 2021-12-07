#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class BaseMemory {
    char* mem;
protected:
    BaseMemory(int size) { mem = new char[size]; }
};

class ROM : public BaseMemory
{
private:
    char *mem=NULL;
public:
    ROM(int byte, char* arr, int BurnLen) : BaseMemory(byte) 
	{ 
		mem = new char [byte]; 
		for(int i=0, j=0; j<BurnLen; i++, j++)
		{
			mem[j]=arr[i];
		}
	}
	
	char read(int i)
	{
		return mem[i];
	}
};

class RAM : public BaseMemory
{
private:
    char *mem;
    int byte;
public:
    RAM(int byte) : BaseMemory(byte) 
	{
		mem=new char[byte];
	}
	void write(int k, char c)
	{
		mem[k]=c;
	}
	char read(int i)
	{
		return mem[i];
	}
};

int main(void)
{
	char x[5] = {'h', 'e', 'l', 'l', 'o'};
    ROM biosROM(1024*10, x, 5);  
    RAM mainMemory(1024*1024); 
   
    for(int i=0; i<5; i++) 
		mainMemory.write(i, biosROM.read(i));
    for(int i=0; i<5; i++) 
		cout << mainMemory.read(i);
	
    return 0;
}

