#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <map> 
using namespace std;

int main(void)
{
	map<string, string> dic;
	
	dic.insert(make_pair("love", "사랑")); 
	dic.insert(make_pair("apple", "사과")); 
	dic["cherry"] = "체리"; 				

	cout << "저장된 단어 개수 " << dic.size() << endl;
	string eng;
	while (true) 
	{
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng); 
		
		if (eng == "exit")
			break; 
		if(dic.find(eng) == dic.end()) // eng '키'를 끝까지 찾았는데 없음
			cout << "없음" << endl;
		else  
			cout << dic[eng] << endl; // dic에서 eng의 값을 찾아 출력
	}
	
	cout << "종료합니다..." << endl;
    
	return 0;
}
