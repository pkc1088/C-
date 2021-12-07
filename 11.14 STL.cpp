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
	it=v.begin();		//begin()+1 하면 2를 가리킴 
	it=v.erase(it);		//현상황에서 erase(it+1)하면 2를 지움  
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<endl;	
	
	it=v.end(); //v의 마지막다음 빈공간을 가리키나 앞전에 erase한번했으니 마지막을가리키게됨... 
	int m=*it;
	cout<<m<<endl;

    return 0;
}

