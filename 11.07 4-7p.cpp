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
	}	//(cir++)-> �ϸ� �ȵǴ� ������ cir�� �� ����Ű������ ����
		//�Ҷ�� *p=cir�ؼ� p�� ������Ű���� 
	
	for(i=0; i<n; i++)
		if((cir+i)->getArea() > 100.00)
			cnt++;
			
	cout<<"100���� ū ���� �� : "<<cnt<<endl;
		
    return 0;
}

