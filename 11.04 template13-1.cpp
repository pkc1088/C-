#include <iostream>
#include <cstring>
using namespace std;

class Point
{
private:
	int xpos, ypos;
	char xchar, ychar;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)	
	{}
	Point(char x, char y) : xchar(x), ychar(y)	
	{}
	void ShowPosition() const
	{
	cout<<'['<<xpos<<" , "<<ypos<<']'<<endl;
	}
	void ShowChar() const
	{
	cout<<'['<<xchar<<" , "<<ychar<<']'<<endl;
	}
};

template <typename T>
void swapint(T *x, T *y)
{
	T temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

template <typename Q>
void swapptr(Q x, Q y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(void)
{
	int a=10, b=20;
	swapint<int>(&a, &b);
	Point pos(a,b);
	pos.ShowPosition();
	
		
	char ptr1='a', ptr2='b';
	swapptr<char*>(&ptr1, &ptr2);
	Point pos2(ptr1, ptr2);
	pos2.ShowChar();	
   
   
   
    return 0;
}

