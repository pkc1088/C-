#include <iostream>
using namespace std;

class Point 
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl; 
	}
	const Point& operator++()
	{
		xpos+=1;
		ypos+=1;
		return *this;
	}
	
	
	friend Point& operator--(Point &ref, int);
	friend Point& operator-(Point &ref);
	friend Point& operator~(Point &ref);
};

Point& operator--(Point &ref, int)
{
	ref.xpos-=1;
	ref.ypos-=1;
	return ref;
}

Point& operator-(Point &ref)
{
	Point pos;
	pos.xpos = -1 * ref.xpos;	
	pos.ypos = -1 * ref.ypos;
	
	return pos;
}

Point& operator~(Point &ref)
{
	Point pos;
	pos.xpos = ref.ypos;	
	pos.ypos = ref.xpos;
	
	return pos;
}

int main(void)
{
 	Point pos1(1, 2);
	Point pos2= -pos1;
//	Point pos2= ~pos1;
	(pos1--)--;
	
	Point pos3(10,10);
	++pos3;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	return 0;
}

