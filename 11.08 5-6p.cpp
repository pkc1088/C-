#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

char& find(char a[], char c, bool& success)	//bool을 참조해야 참조에의한 값변화가 생김 
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
	char &loc = find(s, 'M', b);	//loc에 해당 배열의 위치를 줆 
	if(b==false)
	{
		cout<<"M을 발견할 수 없다"<<endl;
		return 0;
	} 
	loc = 'm';	//그걸 m으로 수정 
	cout<<s<<endl;
	
    return 0;
}

