#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

char& find(char a[], char c, bool& success)	//bool�� �����ؾ� ���������� ����ȭ�� ���� 
{
	int i=0;
	int len=strlen(a);
	
	while(i<len)
	{
		if(a[i]==c)
		{
			success=true;
			return a[i];		
		}
		
		i++;
	}
	
	success=false;
	
	return a[len]; 
}

int main(void)
{
	char s[]="Mike";
	bool b = false;
	char &loc = find(s, 'M', b);	//loc�� �ش� �迭�� ��ġ�� �� 
	if(b==false)
	{
		cout<<"M�� �߰��� �� ����"<<endl;
		return 0;
	} 
	loc = 'm';	//�װ� m���� ���� 
	cout<<s<<endl;
	
    return 0;
}

