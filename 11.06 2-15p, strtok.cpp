#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main(void) 
{
	int a, c;
	char *b;

	while (true)
	{
		cout << "? ";
		char s[100];
		cin.getline(s, 100, '\n');
		a = atoi(strtok(s, " "));
		b = strtok(NULL, " ");
		c = atoi(strtok(NULL, " "));

		switch (*b)
		{
		case '+':
			cout << a << " + " << c << " = " << a + c << endl; break;
		case '-':
			cout << a << " - " << c << " = " << a - c << endl; break;
		case '*':
			cout << a << " * " << c << " = " << a * c << endl; break;
		case '/':
			cout << a << " / " << c << " = " << a / c << endl; break; 
		case '%':
			cout << a << " % " << c << " = " << a % c << endl; break;
		}	
	}
	
	return 0;
}
/*#include <iostream>
using namespace std;

int main() 
{
	int a, c;
	char b;
	while (true) 
	{
		cout << "? ";
		cin >> a >> b >> c;
		switch (b) {
		case '+':cout << a << " " << b << " " << c << " = " << a + c << endl; break;
		case '-':cout << a << " " << b << " " << c << " = " << a - c << endl; break;
		case '*':cout << a << " " << b << " " << c << " = " << a * c << endl; break;
		case '/':cout << a << " " << b << " " << c << " = " << a / c << endl; break;
		case '%':cout << a << " " << b << " " << c << " = " << a % c << endl; break;
		default: cout << "�߸��� ������ �Դϴ�." << endl;
		}
	}
	return 0;
}*/
