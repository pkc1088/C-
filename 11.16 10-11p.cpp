#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Book
{
protected:
	int year;
	string name;
	string author;
public:
	Book(){	}

	Book(int year, string name, string author)
	{
		this->year=year;
		this->name=name;
		this->author=author;
	}
	int getYear(){return this->year;}
	string getName(){return this->name;}
	string getAuthor(){return this->author;}
};

int main(void)
{
	int cnt=0, i=0, year;
	string name, author;
	vector<Book> v;
	
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
    while (true) 
	{
        cout << "�⵵>>";
        cin >> year;
        cin.ignore(1);	//���� �����ִ¿��� 
        if (year == -1)
            break;
        cout << "å�̸�>>";
        getline(cin, name);
        cout << "����>>";
        getline(cin, author);
        Book* temp = new Book(year, name, author);
        v.push_back(*temp);    
    }
    cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
 
    cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
    getline(cin, author);
    for (int i = 0; i < v.size(); i++) 
	{
        if (v[i].getAuthor() == author) 
		{
            cout << v[i].getYear() << "�⵵, " << v[i].getName() << ", " << v[i].getAuthor()<<endl;
            break;
        }
    }
    
    cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
    cin >> year;
    	
	for (int i = 0; i < v.size(); i++) 
	{     
		if (v[i].getYear() == year)
		{
            cout << v[i].getYear() << "�⵵, " << v[i].getName() << ", " << v[i].getAuthor() << endl;
        	break;
        }
    }
 
    return 0;
}

