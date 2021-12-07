#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Stack
{
private:
	int arr[100];
	int cnt;
public:
	Stack()
	{
		arr[100]={0};
		cnt=0;
	}
	Stack& operator <<(int x)
	{
		arr[cnt]=x;
		cnt++;
		return *this;
	}
	
	void operator >>(int& x) //정수의 주소값 바꾼다는 건가.. 
	{
    	cnt--;
        x = arr[cnt];
    }
    
	bool operator!()
	{
		if(cnt==0)
			return true;
		return false;
	}
};

int main(void)
{
	Stack stack;
	stack<<3<<5<<10;
	while(true)
	{
		if(!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	
	cout<<endl;
    return 0;
}

