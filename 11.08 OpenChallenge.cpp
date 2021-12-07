#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Morse
{
private:

public:
	Morse(){}
	
	void GetMorseWord(int num)
	{
		string word[26]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
					   ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
					   "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
		
		
		cout<<word[num]<<" ";
	}	
	
	void GetMorseDigit(int num)
	{
		char *digit[]={"-----", ".----", "..---", "...--", "....-",
						".....", "-....", "--...", "---..", "----."};			   
	
		cout<<digit[num]<<" ";
	}
	
	void GetMorseMarks(char marks)
	{
		switch(marks)
		{
		case '/' :
			cout<<"-..-.";	break;
		case '?' :
			cout<<"..--..";	break;
		case '.' : 
			cout<<".-.-.-";	break;
		case ',' :	 
		 	cout<<"--..--";	break;
		case '+' : 	
			cout<<".-.-.";	break;
		case '=' :	
			cout<<"-...-";	break;
		}
	}
		
	void text2Morse(string str)
	{
		int num, len=str.length();
		
		for(int i=0; i<len; i++)
		{
			if(str[i]==' ')
				cout<<" ";
				
			else if(isalpha(str[i]))
			{
				GetMorseWord((int)str[i] - 'a');
			}
			
			else if(isdigit(str[i]))
			{
				GetMorseDigit((int)str[i] - 48);
			}
			
			else 
			{
				GetMorseMarks(str[i]);
			}
		}
	}
	
};

int main(void)
{
	Morse morse;
	cout<<"아래에 영문 텍스트를 입력하세요"<<endl;
	string str1, str2;
	getline(cin, str1, '\n');
	str2=str1;
	
	morse.text2Morse(str1);

	cout<<endl<<"모스 부호를 다시 영문 텍스트로 바꿉니다"<<endl;
    cout<<str2;

	return 0;
}

