#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);	

//	v.at(2) = 12;
//	int n = v.at(1);
//	cout<<n<<endl<<endl;
	
//	for(int i=0; i<v.size(); i++)
//		cout<<v[i]<<endl;	
	
	vector<int>::iterator it;
	it=v.begin();		//begin()+1 �ϸ� 2�� ����Ŵ 
	it=v.erase(it);		//����Ȳ���� erase(it+1)�ϸ� 2�� ����  
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<endl;	
	
	it=v.end(); //v�� ���������� ������� ����Ű�� ������ erase�ѹ������� ������������Ű�Ե�... 
	int m=*it;
	cout<<m<<endl;

    return 0;
}

