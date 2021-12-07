#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	string str1("what the fuck");
	string str2;
	char str3[100];

	cout<<str1.length()<<endl;
	getline(cin, str2);
	cin.getline(str3, 100);
	
	
	cout<<endl<<str1<<endl<<str2<<endl<<str3<<endl;
/*
	char arr[20];
	cin>>arr;
	cout<<arr;
*/  
    return 0;
}

