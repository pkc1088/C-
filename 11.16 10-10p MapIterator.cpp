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
	m["china"]="beijing";		//[]�� �� �� it->first������ ���ĵ� 
	
	cout << "���� ����� ���� ���� " << m.size() << endl;
	cout << "����� ������ �Է��ϼ���"<<endl;
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
			cout << it->first;		//it->second�ϸ� �������� ���� 
			cout<<"�� ������? ";
			cin>>ans;				//dominca�ʱ�ȭ�Ѱɷ� first, second �����ϸ� �˼� �� 
			if(ans==it->second)		//if(ans==m[it->first])�� ������ 
				cout<<"correct!"<<endl; 
			else
				cout<<"wrong!"<<endl;
		}
	
		
	cout << "�����մϴ�..." << endl;
    return 0;
}

