#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Word
{
protected:
	string Engword;
	string Korword;
public:
	Word(){	}

	Word(string Engword, string Korword)
	{
		this->Engword=Engword;
		this->Korword=Korword;
	}
	string getEngword(){return this->Engword;}
	string getKorword(){return this->Korword;}
};
vector<Word> v;
void insertfunc()
{
	string Engword, Korword;

	while (true) 
	{
		cin.ignore(1);
        cout << "���� >> ";
        cin>>Engword;

        if (Engword == "exit")
            break;
            
        cout << "�ѱ� >> ";
        cin>>Korword;
        
        Word* temp = new Word(Engword, Korword);
        v.push_back(*temp);    
    }
}

void testfunc()
{
	int i=0;
	cin.ignore(1);
	cout<<"���� ���� �׽�Ʈ�� �����մϴ�"<<endl;
	cout<<v[i].getEngword()<<"?"<<endl;
	cout<<v[i].getKorword();

}

int main(void)
{
	Word word[6] = {Word("human","�ΰ�"),Word("society","��ȸ"),Word("emotion","����"),
				Word("doll","����"),Word("trade","�ŷ�"),Word("painting","����") };
	for(int i=0; i<6; i++)
        v.push_back(word[i]);

	int sel;
	cout<<"***** ���� ���� �׽�Ʈ�� �����մϴ� *****"<<endl;
	while(1)
	{
		cout<<"���ֻ���:1,  �����׽�Ʈ:2,  ����:3  >> ";
		cin>>sel;
		switch(sel)
		{
			case 1:
				insertfunc();
				break;
			case 2:
				testfunc();
				break;
			case 3:
				return 0;	
		} 
	} 
	
    return 0;
}

