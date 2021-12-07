#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};
	
	void ShowPositionInfo(int pos)
	{
		switch(pos)
		{
			case CLERK:
				cout<<"사원"<<endl;	break;
			case SENIOR:
				cout<<"주임"<<endl;	break;
			case ASSIST:
				cout<<"대리"<<endl;	break;
			case MANAGER:
				cout<<"과장"<<endl;	break;	
		}
	}

}

class NameCard
{
	private:
		char *name;
		char *comName;
		char *phoneNum;
		int pos;
	public:
		NameCard(char *xname, char *xcomName, char *xphoneNum, int xpos) : pos(xpos)
		{
	
			name=new char[strlen(xname)+1];
			comName=new char[strlen(xcomName)+1];
			phoneNum=new char[strlen(xphoneNum)+1];
			strcpy(name, xname);
			strcpy(comName, xcomName);
			strcpy(phoneNum, xphoneNum);		
		}
		NameCard(const NameCard &copy) : pos(copy.pos)
		{
			name=new char[strlen(copy.name)+1];
			comName=new char[strlen(copy.comName)+1];
			phoneNum=new char[strlen(copy.phoneNum)+1];
			strcpy(name, copy.name);
			strcpy(comName, copy.comName);
			strcpy(phoneNum, copy.phoneNum);		
		}	
		void ShowNameCardInfo()
		{
			cout<<"이름: "<<name<<endl;
			cout<<"회사: "<<comName<<endl;
			cout<<"전화번호: "<<phoneNum<<endl; 
			cout<<"직급: ";	COMP_POS::ShowPositionInfo(pos);
			cout<<endl;
		}
		~NameCard()
		{
			delete []name;
			delete []comName;
			delete []phoneNum;
			cout<<"Called Destructor"<<endl;
		}
};

int main(void)
{
	NameCard manClerk("Lee","ABCEng","010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong","OrangeEng","010-3333-4444", COMP_POS::SENIOR);	
	NameCard manAssist("Kim","SoGoodComp","010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	cout<<endl<<endl;
	
	NameCard copy1=manClerk;
	NameCard copy2=manSenior;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
 } 
