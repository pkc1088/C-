#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
	string str;
	getline(cin, str, '\n');
	int len=str.length();
	const char *p=str.c_str();
	
	for(int i=0; i<len; i++, p++)
		;
	
	for(--p; len>=0; len--, p--)
		cout<<*p;

     return 0;
}
/*#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while(true) {
		cout << ">>";
		getline(cin, text, '\n');
		if(text == "exit")
			break;
		int size = text.length();
		int n = size/2;
		for(int i=0; i<n; i++) {
			char tmp = text[i];
			text[i] = text[size-i-1];
			text[size-i-1] = tmp;
		}
		cout << text << endl;
	}
}*/
