#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
using namespace std;
	
int main(void)
{
	map<string, string> m;
	map<string, string>::iterator it;
	
	m.insert(make_pair("dominica", "dom")); 
	m["bus"]="stop";
	m["korea"]="seoul";
	m["japan"]="tokyo";
	m["china"]="beijing";		//[]안 값 즉 it->first순으로 정렬됨 
	
	cout << "현재 저장된 나라 개수 " << m.size() << endl;
	cout << "나라와 수도를 입력하세요"<<endl;
	string ans, xnation, xcity;
	int i,k=0;

	while(true) 
	{
		i=m.size();
		cout << i+1 << ' ';
		cin>>xnation>>xcity;
		
		if (xnation=="no" && xcity=="no")
			break;
		if (m.find(xnation) == m.end())
			m[xcity]=xnation;
		else
			cout<<"already exist!"<<endl;
	}


		for (it = m.begin(); it != m.end(); it++)
		{
			cout << it->first;		//it->second하면 벨류값이 나옴 
			cout<<"의 수도는? ";
			cin>>ans;				//dominca초기화한걸로 first, second 생각하면 알수 ㅇ 
			if(ans==it->second)		//if(ans==m[it->first])와 같은말 
				cout<<"correct!"<<endl; 
			else
				cout<<"wrong!"<<endl;
		}
	
		
	cout << "종료합니다..." << endl;
    return 0;
}

