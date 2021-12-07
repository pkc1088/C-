#include <iostream>
#include <cstring>
using namespace std;

class Account
{
private:
	string name;
	int id;
	int balance=0;
	
public:
	Account(string xname, int xid, int xbal) : name(xname), id(xid), balance(xbal)
	{}
	void deposit(int money)
	{
		this->balance+=money;
	}
	int withdraw(int withmoney)
	{
		balance=balance-withmoney;
	}
	int getOwner(void)
	{
		return id;
	}
	int inquiry(void)
	{
		return balance;	
	}
};

int main() {
	Account a("kitae", 1, 5000); 	
	a.deposit(50000);			
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);	
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}
