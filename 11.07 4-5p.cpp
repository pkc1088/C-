#include <iostream>
#include <cstring>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
	string str;
	getline(cin, str, '\n');
	int index, length=str.length();
	
	srand((unsigned)time(0));   
	
	char theWord=(char)( 'a' + (rand()%27) );
	
	while(1)
	{
	index=rand() % length;
	if(index!=' ')
		break;
	}
	
	str[index]=theWord;
	
	cout<<str;
	
    return 0;
}

