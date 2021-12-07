#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;  
public:
	Gun(int bnum) : bullet(bnum)
	{ }
	void Shut()
	{
		cout<<"BBANG!"<<endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;    
	Gun * pistol;     
public:
	Police(int bnum, int bcuff)
		: handcuffs(bcuff)
	{
		if(bnum>0)
			pistol=new Gun(bnum);
		else
			pistol=NULL;
	}
	
	Police(const Police &ref) : handcuffs(ref.handcuffs) 
	{
		if(ref.pistol!=NULL)
			pistol=new Gun(*ref.pistol);
		else
			pistol=NULL;
	}
		
	void PutHandcuff() 
	{
		cout<<"SNAP!"<<endl;
		handcuffs--;
	}
	void Shut()
	{
		if(pistol==NULL)
			cout<<"Hut BBANG!"<<endl;
		else
			pistol->Shut();
	}
	~Police()
	{
		if(pistol!=NULL)
			delete pistol;
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.Shut();
	pman1.PutHandcuff();
	
	Police pman2=pman1;
	pman2.Shut();
	pman2.PutHandcuff();
	
	return 0;
}
