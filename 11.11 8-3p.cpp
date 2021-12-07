#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Point 
{
private:
    int x,y;
public:
    Point(int x=0, int y=0) { this->x = x; this->y = y; }
    int getX(){ return x; }
    int getY(){ return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point
{
private:
	string str;
public:	
	ColorPoint() : Point()
	{
		this->str="BLACK";
	}
	ColorPoint(int x, int y, string str) : Point(x, y)
	{
		this->str=str;
	} 

	void setColor(string str)  
	{
		this->str=str;
	}
	
	void setPoint(int x, int y)  
	{
		move(x, y);
	}
	
	void show()
	{
		cout<<this->str<<"색으로 ("<<getX()<<", "<<getY()<<")에 위치한 점입니다."<<endl; 
	}
};

int main(void)
{
	ColorPoint zeroPoint;
	zeroPoint.show();
	
	ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
	
	
	
	
	
    return 0;
}

