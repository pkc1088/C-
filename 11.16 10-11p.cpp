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
	
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
    while (true) 
	{
        cout << "년도>>";
        cin >> year;
        cin.ignore(1);	//엔터 지워주는역할 
        if (year == -1)
            break;
        cout << "책이름>>";
        getline(cin, name);
        cout << "저자>>";
        getline(cin, author);
        Book* temp = new Book(year, name, author);
        v.push_back(*temp);    
    }
    cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
 
    cout << "검색하고자 하는 저자 이름을 입력하세요>>";
    getline(cin, author);
    for (int i = 0; i < v.size(); i++) 
	{
        if (v[i].getAuthor() == author) 
		{
            cout << v[i].getYear() << "년도, " << v[i].getName() << ", " << v[i].getAuthor()<<endl;
            break;
        }
    }
    
    cout << "검색하고자 하는 년도를 입력하세요>>";
    cin >> year;
    	
	for (int i = 0; i < v.size(); i++) 
	{     
		if (v[i].getYear() == year)
		{
            cout << v[i].getYear() << "년도, " << v[i].getName() << ", " << v[i].getAuthor() << endl;
        	break;
        }
    }
 
    return 0;
}

