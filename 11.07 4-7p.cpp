#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Circle
{
private:
	int radius;
public:
	void setRadius(int radius)
	{this->radius=radius;}
	double getArea()
	{return 3.14*radius*radius;}
};

int main(void)
{
	int i, n, r, cnt=0;
	cin>>n;
	
	Circle *cir=new Circle[n];
	
	for(i=0; i<n; i++) 
	{
		cin>>r;
		(cir+i)->setRadius(r);
	}	//(cir++)-> 하면 안되는 이유는 cir이 뭘 가리키는지가 없음
		//할라면 *p=cir해서 p를 증감시키던지 
	
	for(i=0; i<n; i++)
		if((cir+i)->getArea() > 100.00)
			cnt++;
			
	cout<<"100보다 큰 원의 수 : "<<cnt<<endl;
		
    return 0;
}

