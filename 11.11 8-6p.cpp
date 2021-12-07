#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class BaseArray 
{
private:
	int capacity; 
    int *mem;
public:  
    BaseArray(int capacity=100)
	{
        this->capacity = capacity; 
		mem = new int [capacity];
    }
    ~BaseArray() { delete [] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyStack : public BaseArray
{
private:
	int size=-1;
	int index=0;
public:
	MyStack(int x) : BaseArray(x)
	{}
	
	void push(int n)
	{
		put(++size, n);
	}	
	int pop()
	{
		size--;
		int xpop=get(size+1);
		return xpop;
	}
	
	int capacity()	{return getCapacity();}
	int length() {return size+1;}
};

int main(void)
{
 	MyStack mStack(100);
    int n;
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
   
    for(int i=0; i<5; i++)
	{
        cin >> n;
        mStack.push(n); // 스택에 푸시 
    }
    
    cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
  
    while(mStack.length() != 0)
        cout << mStack.pop() << ' '; // 스택에서 팝 
    
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;

    return 0;
}

