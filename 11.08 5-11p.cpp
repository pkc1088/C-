#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Book
{
private:
	string title;
	int price;
public:
	
	Book(string title, int price) 
	{
		this->title = title; 
		this->price = price;
	}
	/*
	Book(const Book& b) 
	{ 	
		title = b.title;
		price = b.price;
	}
	*/
	void set(string title, int price)
	{
		this->title = title;
		this->price = price;
	}
	
	void show()
	{
		cout<<title<<' '<<price<<"원"<<endl; 
	} 
};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
	
	return 0;
}

/*
class Book
{
private:
	char* title;
	int price;
public:
	
	Book(const char*title, int price) 
	{ 
		int len = strlen(title);
		this->title = new char [len + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	
	Book(const Book& b) 
	{ 	
		int len = strlen(b.title);
		title = new char [len + 1];
		strcpy(title, b.title);
		price = b.price;
	}
	
	void set(const char* title, int price)
	{
		int len = strlen(title);
		this->title = new char [len + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	
	void show()
	{
		cout<<title<<' '<<price<<"원"<<endl; 
	} 
};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
	
	return 0;
}*/

