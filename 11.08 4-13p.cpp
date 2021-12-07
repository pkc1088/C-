#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Histogram
{
private:
	string str;
public:	
	Histogram(string xstr)
	{
		str=xstr;
	}
	void put(string xstr)
	{
		str+=xstr;
	}
	void putc(char ch)
	{
		int len=str.length();
		str[len]+=ch;
	}
	void print()
	{
		for(int i=0; i<str.length(); i++)
			str[i]=tolower(str[i]);
		
		string xstr = "abcdefghijklmnopqrstuvwxyz";
		
		for(int i=0; i<26; i++)
		{
			int  findex, startindex=0, cnt=0;
			
			while(1)
			{
				findex=str.find(xstr[i], startindex);
				
				if( findex==-1 )
					break;
					
				cnt++;
				startindex=findex+1;
			}		
			
			cout<< xstr[i] <<" ("<<cnt<<')'<<" : ";
			for(int j=0; j<cnt; j++)
		    	cout<<'*';
		    cout<<endl;
		}		
			
	

	}
};

int main(void)
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
	return 0;	
}
