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
    cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
   
    for(int i=0; i<5; i++)
	{
        cin >> n;
        mStack.push(n); // ���ÿ� Ǫ�� 
    }
    
    cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
    cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
  
    while(mStack.length() != 0)
        cout << mStack.pop() << ' '; // ���ÿ��� �� 
    
    cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;

    return 0;
}

