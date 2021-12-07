#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Circle
{
private:
	int radius;
	string name;
public:
	void setCircle(string name, int radius)
	{
		this->name=name;
		this->radius=radius;
	}
	
	double getArea()
	{
		return (3.14*radius*radius);
	}
	
	string getName()
	{
		return name;
	}
};


class CircleManager
{
private:
	Circle *p;
	int size;
public:
	CircleManager(int size)
	{
		p = new Circle[size];
		this->size=size;
		
		string str;
		int r;
		
		for(int i=0; i<size; i++)
		{
		cout<<"��"<<i+1<<"�� �̸��� ������ >> ";
		cin>>str>>r;
		(p+i)->setCircle(str, r);
		}
	}
	
	void searchByName()
	{
		string xname;
		cin>>xname;
		
		for(int i=0; i<size;i++)
		{
			if((p+i)->getName() == xname)
			{
			cout<<(p+i)->getName()<<"�� ������ "<<(p+i)->getArea()<<endl; 
			return;
			}
		}
		cout<<"�ش� ���� �������� �ʽ��ϴ�"; 
	}
	
	void searchByArea()
	{
		cout<<"�ּ� ������ ������ �Է��ϼ��� >> ";
		int miniArea;
		cin>>miniArea;
		
		cout<<miniArea; 
		cout<<"���� ū ���� �˻��մϴ�."<<endl;
	
		for(int i=0; i<size; i++)
		{
			double dx=(p+i)->getArea();
			
			if( dx > miniArea)
			{
				string xstr;
				xstr=(p+i)->getName();
				double xarea=(p+i)->getArea();
				cout<<xstr<<"�� ������ "<<xarea<<",\t";
			}
		
		}
		
	}
};


int main(void)
{
	int num;
	cout<<"���� ���� >> ";
	cin>>num;
	CircleManager circlemanager(num); 

	cout<<"�˻��ϰ��� �ϴ� ���� �̸� >> ";
	circlemanager.searchByName(); 
	
	circlemanager.searchByArea(); 
	
	return 0;
}

