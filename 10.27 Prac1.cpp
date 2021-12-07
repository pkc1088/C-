#include <iostream>
#include <cstring>
using namespace std;

class NameCard
{
	private:
		char *name;
		int age;
	public:
		NameCard(char *xname, int xage) : age(xage)
		{
	
			name=new char[strlen(xname)+1];
			strcpy(name, xname);		
		}
		NameCard(const NameCard &copy)  
		{
			age=copy.age;	//�̷��� ���൵ ���� 
			name=new char[strlen(copy.name)+1];
			strcpy(name, copy.name);		
		}	
		void GetAge(int cage)
		{
			age=cage;
		}
		void ShowNameCardInfo()
		{
			cout<<"�̸�: "<<name<<endl;
			cout<<"����: "<<age<<endl;
			cout<<endl;
		}
		
		~NameCard()
		{
			delete []name;
			cout<<"Called Destructor"<<endl;
		}
};

int main(void)
{
	NameCard manClerk("Lee", 17);

	NameCard manBoss=manClerk;
	manClerk.GetAge(12);
	manClerk.ShowNameCardInfo();
	manBoss.ShowNameCardInfo();	//�������� ����

	return 0;
 } 
