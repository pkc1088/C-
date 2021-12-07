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
	
	dic.insert(make_pair("love", "���")); 
	dic.insert(make_pair("apple", "���")); 
	dic["cherry"] = "ü��"; 				

	cout << "����� �ܾ� ���� " << dic.size() << endl;
	string eng;
	while (true) 
	{
		cout << "ã�� ���� �ܾ�>> ";
		getline(cin, eng); 
		
		if (eng == "exit")
			break; 
		if(dic.find(eng) == dic.end()) // eng 'Ű'�� ������ ã�Ҵµ� ����
			cout << "����" << endl;
		else  
			cout << dic[eng] << endl; // dic���� eng�� ���� ã�� ���
	}
	
	cout << "�����մϴ�..." << endl;
    
	return 0;
}
