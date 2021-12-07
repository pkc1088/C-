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
	cout<<"1. ���°���"<<endl;
	cout<<"2. �Ա�"<<endl;
	cout<<"3. ���"<<endl;
	cout<<"4. �������� ��ü ���"<<endl;	
	cout<<"5. ���α׷� ����"<<endl;
	cout<<"����: ";
}
 	
void MakeAccount(void)
{
	int id, balance;
	char name[50];
	
	cout<<"[���°���]"<<endl;
	cout<<"����ID : ";	cin>>id;
	cout<<"�̸� : ";	cin>>name;
	cout<<"�Աݾ�: ";		cin>>balance;
 	
	acc[accNum].id=id;
	acc[accNum].balance=balance;
	strcpy(acc[accNum].name, name);
	accNum++;
}

void DepositMoney(void)
{
	int money, id;
	cout<<"����ID : "; cin>>id;
	cout<<"�Աݾ� : "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(acc[i].id==id)
		{
			acc[i].balance+=money;
			cout<<"�ԱݿϷ�"<<endl<<endl;
			return;
		}
	}
	cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
}

void WithdrawMoney(void)
{
	int money, id;
	cout<<"����ID : "; cin>>id;
	cout<<"��ݾ� : "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(acc[i].id==id)
		{
			if(acc[i].balance<money)
			{
				cout<<"�ܾ׺���"<<endl<<endl;
				return;
			}

			acc[i].balance-=money;
			cout<<"��ݿϷ�"<<endl<<endl;
			return;
		}
	}
	cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
}

void AccInfo(void)
{
	for(int i=0; i<accNum; i++)
	{
	cout<<"����ID : "<<acc[i].id<<endl;
	cout<<"�̸� : "<<acc[i].name<<endl;
	cout<<"�ܾ� : "<<acc[i].balance<<endl;			
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
