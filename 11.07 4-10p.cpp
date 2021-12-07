#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person 
{
private:
	string name;
public:
	string getName()			{return name;}
	void setName(string name) 	{ this->name = name; }
};

class Family
{
private:
	string name;
	int size;	
	Person *p;
public:
	Family(string name, int size)
	{
		this->name=name;
		this->size=size;
		p=new Person[size];		
	}
	void setName(int i, string name)
	{
		(p+i)->setName(name);
	}
	void show()
	{
		for(int i=0; i<size; i++)
			cout<<(p+i)->getName()<<"\t";
	}
};

int main(void) 
{
	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	return 0;
}
