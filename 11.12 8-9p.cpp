#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Flight 
{
private:
	string No1_Seat[8]={"empty","empty","empty","empty","empty","empty","empty","empty"};
	string No2_Seat[8]={"empty","empty","empty","empty","empty","empty","empty","empty"};
	string No3_Seat[8]={"empty","empty","empty","empty","empty","empty","empty","empty"};
public:
	Flight()
	{}
	
	void reserve()
	{
		int time1;
		cout<<"07��:1,  12��:2,  17��:3  >> ";
		cin>>time1; 
		
		switch(time1)
		{
			case 1:
			{
				showNo1();
				string name1; int seatnum1;
				cout<<"�¼���ȣ>>"; 
				cin>>seatnum1;
				cout<<"�̸��Է�>>";
				cin>>name1; 
				if(No1_Seat[seatnum1-1]=="empty")
				{
					No1_Seat[seatnum1-1] = name1;
				}
				break;
			}
			case 2:
			{
				showNo2();
				string name2; int seatnum2;	
				cout<<"�¼���ȣ>>"; 
				cin>>seatnum2;
				cout<<"�̸��Է�>>";
				cin>>name2; 
				if(No2_Seat[seatnum2-1]=="empty")
				{
					No2_Seat[seatnum2-1]=name2;
				}
				break;
			}
			case 3:
			{
				showNo3();
				string name3; int seatnum3;
				cout<<"�¼���ȣ>>"; 
				cin>>seatnum3;
				cout<<"�̸��Է�>>";
				cin>>name3; 
				if(No3_Seat[seatnum3-1]=="empty")
				{
					No3_Seat[seatnum3-1]=name3;
				}
				break;
			}
		
		return; 
		}
	}
	
	void cancel()
	{
		int time, seatnum;
		string name;
		cout<<"07��:1,  12��:2,  17��:3  >> ";
		cin>>time; 
		switch(time)
		{
			case 1 :
				showNo1();
				cout<<"�¼���ȣ>> "; 
				cin>>seatnum;
				cout<<"�̸��Է�>> "; 
				cin>>name;
				if(No1_Seat[seatnum-1]==name)
					No1_Seat[seatnum-1]="---";
				break;		
			case 2 :
				showNo2();
				cout<<"�¼���ȣ>> "; 
				cin>>seatnum;
				cout<<"�̸��Է�>> "; 
				cin>>name;
				if(No2_Seat[seatnum-1]==name)
					No2_Seat[seatnum-1]="---";
				break;
			case 3 :
				showNo3();
				cout<<"�¼���ȣ>> "; 
				cin>>seatnum;
				cout<<"�̸��Է�>> "; 
				cin>>name;
				if(No3_Seat[seatnum-1]==name)
					No3_Seat[seatnum-1]="---";
				break;
		}
		
	}
	
	void showNo1()
	{
		cout<<"07��: "; 
		for(int i=0; i<8; i++)
		{
			if(No1_Seat[i]=="empty")
				cout<<"---"<<"  ";
			else 
				cout<<No1_Seat[i]<<"  ";
		}
		cout<<endl;
	}
		
	void showNo2()
	{
		cout<<"12��: ";
		for(int i=0; i<8; i++)
		{
			if(No2_Seat[i]=="empty")
				cout<<"---"<<"  ";
			else 
				cout<<No2_Seat[i]<<"  ";
		}
		cout<<endl;
	}
	
	void showNo3()
	{
		cout<<"17��: ";
		for(int i=0; i<8; i++)
		{
			if(No3_Seat[i]=="empty")
				cout<<"---"<<"  ";
			else 
				cout<<No3_Seat[i]<<"  ";
		}
		cout<<endl;
	}
};

int main(void)
{
	int sel;
	Flight flight;
	
	cout<<"***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****"<<endl<<endl;
	while(1)
	{
		cout<<"����:1  ���:2,  ����:3,  ������:4  >> ";
		cin>>sel;
	
		switch(sel)
		{
			case 1 : 
				flight.reserve(); 	break;

			case 2 :
				flight.cancel();	break;
				
			case 3 :
				{
					flight.showNo1(); 
					flight.showNo2(); 
					flight.showNo3();	
					break;
				}
			case 4 :
				return 0;
		}	
	} 
	
    return 0;
}

