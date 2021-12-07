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
        cout << "영어 >> ";
        cin>>Engword;

        if (Engword == "exit")
            break;
            
        cout << "한글 >> ";
        cin>>Korword;
        
        Word* temp = new Word(Engword, Korword);
        v.push_back(*temp);    
    }
}

void testfunc()
{
	int i=0;
	cin.ignore(1);
	cout<<"영어 어휘 테스트를 시작합니다"<<endl;
	cout<<v[i].getEngword()<<"?"<<endl;
	cout<<v[i].getKorword();

}

int main(void)
{
	Word word[6] = {Word("human","인간"),Word("society","사회"),Word("emotion","감정"),
				Word("doll","인형"),Word("trade","거래"),Word("painting","사진") };
	for(int i=0; i<6; i++)
        v.push_back(word[i]);

	int sel;
	cout<<"***** 영어 어휘 테스트를 시작합니다 *****"<<endl;
	while(1)
	{
		cout<<"어휘삽입:1,  어휘테스트:2,  종료:3  >> ";
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

