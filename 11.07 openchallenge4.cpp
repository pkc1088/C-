#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;

class Player
{
private:
	string name;

public:
	void setname(string s)
	{
		name=s;
	}
	void showname(void)
	{
		cout<<name;
	}
};

class Word
{
	private:
		string preword;
		string newword;
		int prelength;
	public:
		Word(){preword="hey", prelength=3;}

		void SetPreword()
		{
			preword=newword;
			prelength=preword.length();
		}
		void GetWord()
		{
			string newword;
			cin>>newword;
			this->newword=newword;
		}
		bool WordCheck()
		{
			if(newword[0] == preword[prelength-1])
				return true;
			return false;
		}
};

int main(void)
{
	int i, playernum, prelength;
	string strName, newword, preword;
	
	cout<<"���ӿ� �����ϴ� �ο� : ";
	cin>>playernum;
	Player player[playernum];
	 
	for(i=0; i<playernum; i++)
	{
		cout<<"������ �̸� : "; 
		cin>>strName;
		player[i].setname(strName);	
	}
	cout<<"���� �ܾ�� hey�Դϴ�."<<endl;
	
	Word word;
	
	while(1)
	{
		for(i=0; i<playernum; i++)
		{
		player[i].showname();
		cout<<">>";
		word.GetWord();
		
		if(!word.WordCheck())
			goto here;
		
		word.SetPreword();
	
		}
	}
	here: ;
	cout<<"�߸��� �ܾ��Դϴ� ";
	player[i].showname();
	cout<<" �й�"<<endl;
	
	 
    return 0;
}

