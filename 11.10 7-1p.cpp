#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Book
{
private:
	string title;
	int price, pages;
public:
	Book(string title="", int price=0, int pages=0)
	{
		this->title=title; this->price=price; this->pages=pages;
	}
	
	void show()
	{
		cout<<title<<' '<<price<<"원 "<<pages<<" 페이지"<<endl; 
	}
	
	string getTitle()	
	{	
		return title;	
	}
	
	bool operator< (string str)
	{
		if( str.compare(this->title)  < 0 )
			return true;
		return false;
	}
	
	Book& operator+= (int i)
	{
		this->price+=i;
		return *this;
	}
	
	Book& operator-= (int i)
	{
		this->price-=i;
		return *this;
	}
	
	
	friend bool operator!(Book a);
	friend bool operator==(Book a, Book b);
	friend bool operator==(Book a, int i);
	friend bool operator==(Book a, string s);
};

bool operator!(Book a)
{
	if(a.price==0)
		return true;
}
bool operator==(Book a, Book b)
{
	if(a.title==b.title)
		if(a.price==b.price)
			if(a.pages==b.pages)
				return true;
	return false;
}
bool operator==(Book a, int i)
{
	if(a.price==i)
		return true;
	return false;
}
bool operator==(Book a, string s)
{
	if(a.title==s)
		return true;
	return false;
}


int main(void)
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a+=500;	b-=500;
	a.show();	b.show(); 
	
	if(a==20500) cout<<"정가 20500원"<<endl;
	if(a=="청춘") cout<<"명품 c++ 입니다."<<endl;
	if(a==b) cout<<"두 책이 같은 책입니다."<<endl; 
	
	Book book("벼룩시장", 0, 50);
	if(!book)
		cout<<"공짜다"<<endl; 
	
	string str;
	cout<<"책 이름을 입력하세요>>";
	getline(cin, str);
	if (str<a.getTitle()) 
		cout<<a.getTitle()<<"이 "<<str<<"보다 뒤에 있구나!"<<endl; 
		
    return 0;
}

