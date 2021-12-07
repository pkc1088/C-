#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <map> 
using namespace std;

int main(void)
{
	vector<int> v;
	for(int i=1; i<5; i++)
		v.push_back(i);
	vector<int>::iterator it;
	it=v.begin();		
	int n=*it;
	n*=2;
	*it=n;		
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<endl;	
	it=v.end();
	int m=*it;
	cout<<m<<endl;
	

		
    return 0;
}
