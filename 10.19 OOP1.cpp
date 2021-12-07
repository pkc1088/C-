#include <iostream>
#include <cstring>
using namespace std;

struct account{
	int id;
	int balance;	
	char name[50];
};

struct account acc[100];
int accNum=0;

void display(void)
{
	cout<<"-----Menu-----"<<endl;
	cout<<"1. 개좌개설"<<endl;
	cout<<"2. 입금"<<endl;
	cout<<"3. 출금"<<endl;
	cout<<"4. 계좌정보 전체 출력"<<endl;	
	cout<<"5. 프로그램 종료"<<endl;
	cout<<"선택: ";
}
 	
void MakeAccount(void)
{
	int id, balance;
	char name[50];
	
	cout<<"[계좌개설]"<<endl;
	cout<<"계좌ID : ";	cin>>id;
	cout<<"이름 : ";	cin>>name;
	cout<<"입금액: ";		cin>>balance;
 	
	acc[accNum].id=id;
	acc[accNum].balance=balance;
	strcpy(acc[accNum].name, name);
	accNum++;
}

void DepositMoney(void)
{
	int money, id;
	cout<<"계좌ID : "; cin>>id;
	cout<<"입금액 : "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(acc[i].id==id)
		{
			acc[i].balance+=money;
			cout<<"입금완료"<<endl<<endl;
			return;
		}
	}
	cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}

void WithdrawMoney(void)
{
	int money, id;
	cout<<"계좌ID : "; cin>>id;
	cout<<"출금액 : "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(acc[i].id==id)
		{
			if(acc[i].balance<money)
			{
				cout<<"잔액부족"<<endl<<endl;
				return;
			}

			acc[i].balance-=money;
			cout<<"출금완료"<<endl<<endl;
			return;
		}
	}
	cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}

void AccInfo(void)
{
	for(int i=0; i<accNum; i++)
	{
	cout<<"계좌ID : "<<acc[i].id<<endl;
	cout<<"이름 : "<<acc[i].name<<endl;
	cout<<"잔액 : "<<acc[i].balance<<endl;			
	}
	
}

int main(void)
{
	int num;
	
	while(1)
	{
	
 	 display();
	 cin>>num;
	
	 switch(num)
	 {
		case 1:
			MakeAccount();		break;
		case 2:
			DepositMoney(); 	break;
		case 3:
			WithdrawMoney(); 	break;
		case 4:
			AccInfo(); 			break;
		case 5:
			return 0;
	 }
	
	}
	
	return 0;
}
