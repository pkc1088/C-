#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class GameObject 
{
protected:
 	int distance; 
	int x, y; 
public:
	GameObject(int startX, int startY, int distance) 
	{
 		this->x = startX; this->y = startY;
  		this->distance = distance;
 	}

 	virtual void move() = 0; 
 	virtual char getShape() = 0;
	
	int getX() { return x; }
 	int getY() { return y; }
 	
	void check() 
	{
		if(x>19)
			x=0;
		if(x<0)
			x=19;
        if (y>9)
            y=0;
        if (y<0)
            y=9;
    }
	
	bool collide(GameObject* p) 
	{ // 이 객체가 객체 p와 충돌했으면 true 리턴
  		if (this->x == p->getX() && this->y == p->getY())
   			return true;
  		else
	   		return false;
 	}
};

class Monster : public GameObject
{
	
public:
	Monster(int startX, int startY, int distance) : GameObject(startX, startY, distance)
	{}	
	
	void move()
	{
		srand((unsigned)time(0)); 
    	int x=rand()%4;
		switch(x)
		{
			case 0:
				x+=2;	check();	break;
			case 1:
				x-=2;	check();	break;
			case 2:	
				y+=2;	check();	break;
			case 3:
				y-=2;	check();	break;
		}
	}
	
	char getShape()
	{
		return 'M';
	}
};

class Human : public GameObject
{
	
public:
	Human(int startX, int startY, int distance) : GameObject(startX, startY, distance)
	{}
		
	void move()
	{
		char seldirec;
		cin>>seldirec;
		switch(seldirec)
		{
			case 'a' :
				x-=1;	check();	break;
			case 's' :
				y+=1;	check();	break;
			case 'd' :
				y-=1;	check();	break;
			case 'f' :
				x+=1;	check();	break;
		}
	}
	
	char getShape()
	{
		return 'H';
	}
};

class Food : public GameObject
{
public:
	Food(int startX, int startY, int distance) : GameObject(startX, startY, distance)
	{}	
	
	void move()
	{
		int cnt=0;
		srand((unsigned)time(0)); 
    	int x=rand()%4;
    	
		if (cnt < 2)
		{
			switch(x)
			{
			case 0:
				x+=1;	check();	break;
			case 1:
				x-=1;	check();	break;
			case 2:	
				y+=1;	check();	break;
			case 3:
				y-=1;	check();	break;
			}
		}
		else 
		{
            cnt++;
            if (cnt == 5)
            	cnt = 0;
        }
	}
	
	char getShape()
	{
		return '@';
	}
};


int main() 
{
	char board[10][20];
	int i,j;
	
	for(i=0; i<10; i++)
		for(j=0; j<20; j++)
			board[i][j]='-';
	
	Monster mon(5,5,2);
	Human hum(0,0,1);
	Food foo(9,9,1);
	
	while(1)
	{	
		board[hum.getY()][hum.getX()]=hum.getShape();
		board[foo.getY()][foo.getX()]=foo.getShape();
		board[mon.getY()][mon.getX()]=mon.getShape();
		
		if(board[hum.getY()][hum.getX()] ==	board[mon.getY()][mon.getX()]
	 	 ||board[mon.getY()][mon.getX()] == board[foo.getY()][foo.getX()])
		{
			cout<<"*****GAME OVER*****";
			return 0;
		}
		
		for(i=0; i<10; i++)
		{
			for(j=0; j<20; j++)
			{
				cout<<board[i][j];
			}	
			cout<<endl;
		}
		cout<<"왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
		
		board[hum.getY()][hum.getX()]='-';
		board[foo.getY()][foo.getX()]='-';
		board[mon.getY()][mon.getX()]='-';
		hum.move();
		foo.move();
		mon.move();
	}

	return 0;
}    


