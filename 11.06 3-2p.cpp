#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d)
	{}
		
	Date(string s ) 
	{
		char ch[100];
		strcpy(ch, s.c_str());
		
		year = stoi(strtok(ch, "/"));
		month = stoi(strtok(NULL, "/"));
		day = stoi(strtok(NULL, "\n"));
	}
	
	int getYear()	{ return year;}
	int getMonth()	{ return month;}
	int getDay()	{ return day;}
	
	void show()
	{
		cout<<year<<"³â"<<month<<"¿ù"<<day<<"ÀÏ"<<endl; 
	}
};

int main(void) 
{
	Date birth(2014, 3, 20);
 	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}

