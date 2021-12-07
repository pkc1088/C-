#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
	private:
		char *name;
		int age;
	public:
		MyFriendInfo(char *xname, int xage) : age(xage)
		{
			name=new char[strlen(xname)+1];
			strcpy(name, xname);
		}
		
		MyFriendInfo(const MyFriendInfo& copy) : age(copy.age)
		{
			name=new char[strlen(copy.name)+1];
			strcpy(name, copy.name);
		}
		
		void ShowMyFriendInfo()
		{
			cout<<"이름: "<<name<<endl;
			cout<<"나이: "<<age<<endl;
		}
		~MyFriendInfo()
		{
			delete []name;
		}
};

class MyFriendDetailInfo : public MyFriendInfo
{
	private:
		char *addr;
		char *phone;
	public:
		MyFriendDetailInfo(char *xaddr, char *xphone, char *xname, int xage) 
							: MyFriendInfo(xname, xage)
		{
			addr=new char[strlen(xaddr)+1];
			strcpy(addr, xaddr);
			phone=new char[strlen(xphone)+1];
			strcpy(phone, xphone);
		}
		
		MyFriendDetailInfo(const MyFriendDetailInfo& copy)  
			:MyFriendInfo(copy)	//중요!! 
		{
			addr=new char[strlen(copy.addr)+1];
			strcpy(addr, copy.addr);
			phone=new char[strlen(copy.phone)+1];
			strcpy(phone, copy.phone);
		}  
	
		void ChangePhone(char *cphone)
		{
			strcpy(phone, cphone);
		}

		void ShowMyFriendDetailInfo()
		{
			ShowMyFriendInfo();
			cout<<"주소: "<<addr<<endl;
			cout<<"전화: "<<phone<<endl;
		}
		
		~MyFriendDetailInfo()
		{
			delete []addr;
			delete []phone;
		}
};

int main(void)
{
	MyFriendDetailInfo info1("Busan", "010-1234-5678", "KIM", 99);
	info1.ShowMyFriendInfo();	
	info1.ShowMyFriendDetailInfo();
	
	cout<<endl<<endl;	
	MyFriendDetailInfo info2=info1;
	info2.ShowMyFriendDetailInfo();	
	
/*	cout<<endl<<endl;	
	info2.ChangePhone("010-9999-9999");
	info2.ShowMyFriendDetailInfo();
	info1.ShowMyFriendDetailInfo();		//얕은복사 증명
*/	
	cout<<endl<<endl; 
	MyFriendDetailInfo info3=info1;	
	info3.ChangePhone("010-7777-7777");
	info3.ShowMyFriendDetailInfo();
	info1.ShowMyFriendDetailInfo();		//깊은복사 증명	
	
	return 0;
}
