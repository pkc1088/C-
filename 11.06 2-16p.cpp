#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char ch;
	int i, count[26]={0};
	
	while( ( ch = toupper( getchar() ) ) != ';')
	{
		i=0;
		
		while(i<26)
		{
			if(ch=='A'+i)
				{
				count[i]++;
				break;
				}
			i++;
		}
	}
	
	char alpha='a';
	
	for(i=0; i<26; i++)
		{
		cout<< (char)(alpha+i) <<" ("<<count[i]<<')'<<" : ";
   		
		for(int j=0; j<count[i]; j++)
		   cout<<'*';
		
		cout<<endl;
		}
		
	return 0;
}

