#include<iostream>
using namespace std;
 
class Circle 
{
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};
 
class NamedCircle :Circle 
{
    string name;
public:
    NamedCircle();
    double getCircleArea() { return getArea(); }
    string getName() { return name; }
    static int cnt;
};
 
int NamedCircle::cnt = 0;

NamedCircle::NamedCircle() 
{
    int a;
    string n;
    cout << ++cnt << ">> ";
    cin >> a >> n;
    setRadius(a);
    name = n;
}
 
int main() 
{
    cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
    NamedCircle pizza[5];
    int Max = 0;
    string MaxCircle;
    for (int i = 0; i < 5; i++) 
	{
        if (Max < pizza[i].getCircleArea()) 
		{
            Max = pizza[i].getCircleArea();
            MaxCircle = pizza[i].getName();
        }
    }
    cout << "���� ������ ū ���ڴ� " << MaxCircle << "�Դϴ�" << endl;
}



