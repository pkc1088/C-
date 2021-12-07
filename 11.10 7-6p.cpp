#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Matrix
{
private:
	int v1,v2,v3,v4;
public:
	Matrix()
	{
		v1=v2=v3=v4=0;
	}
	Matrix(int n1, int n2, int n3, int n4)
	{
		v1=n1; v2=n2; v3=n3; v4=n4;
	}
	
	void show()
	{
		cout<<"{ "<<v1<<' '<<v2<<' '<<v3<<' '<<v4<<" }"<<endl;
	}
	
	Matrix operator+(Matrix& b)
	{
		Matrix temp;
		temp.v1 = this->v1 + b.v1;
		temp.v2 = this->v2 + b.v2;
		temp.v3 = this->v3 + b.v3;
		temp.v4 = this->v4 + b.v4;
		return temp;
	}
	
	Matrix& operator+=(Matrix &b)
	{
		this->v1+=b.v1;
		this->v2+=b.v2;
		this->v3+=b.v3;
		this->v4+=b.v4;
		
		return *this;
	}
	
	friend bool operator==(Matrix a, Matrix c);
};

bool operator==(Matrix a, Matrix c)
{
	if(a.v1==c.v1 && a.v2==c.v2 && a.v3==c.v3 && a.v4==c.v4)
		return true;
	return false;
}

int main(void)
{
	Matrix a(1,2,3,4), b(2,3,4,5), c;
	c=a+b;
	a+=b;
	a.show(); b.show(); c.show();
	
	if(a==c)
		cout<<"a and c are the same"<<endl;	
		
    return 0;
}
/* 
private:
	int arr[4];
public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        arr[3] = d;
    }						이렇게 할 수는 있음... 
*/	
