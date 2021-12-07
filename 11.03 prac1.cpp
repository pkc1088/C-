#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	char * name;
	int age;
public:
	Person(char * myname, int myage)
	{
		int len=strlen(myname)+1;
		name=new char[len];
		strcpy(name, myname);
		age=myage;
	}
	
	Person& operator=(const Person &ref)
	{
		strcpy(name, ref.name);
		age=ref.age;
	} 	//깊은 복사를 operator=를 통해서 하는 방법임... 
	
	void ShowPersonInfo() const
	{
		cout<<"이름: "<<name<<endl;
		cout<<"나이: "<<age<<endl;
	}
	
	~Person()
	{
		delete []name;
		cout<<"called destructor!"<<endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2=man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
