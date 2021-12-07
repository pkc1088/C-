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
		cout<<"원"<<i+1<<"의 이름과 반지름 >> ";
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
			cout<<(p+i)->getName()<<"의 면적은 "<<(p+i)->getArea()<<endl; 
			return;
			}
		}
		cout<<"해당 원이 존재하지 않습니다"; 
	}
	
	void searchByArea()
	{
		cout<<"최소 면적을 정수로 입력하세요 >> ";
		int miniArea;
		cin>>miniArea;
		
		cout<<miniArea; 
		cout<<"보다 큰 원을 검색합니다."<<endl;
	
		for(int i=0; i<size; i++)
		{
			double dx=(p+i)->getArea();
			
			if( dx > miniArea)
			{
				string xstr;
				xstr=(p+i)->getName();
				double xarea=(p+i)->getArea();
				cout<<xstr<<"의 면적은 "<<xarea<<",\t";
			}
		
		}
		
	}
};


int main(void)
{
	int num;
	cout<<"원의 개수 >> ";
	cin>>num;
	CircleManager circlemanager(num); 

	cout<<"검색하고자 하는 원의 이름 >> ";
	circlemanager.searchByName(); 
	
	circlemanager.searchByArea(); 
	
	return 0;
}

