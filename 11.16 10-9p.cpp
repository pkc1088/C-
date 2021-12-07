#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int x, i=0, sum=0;
	vector<int> v;
	
	while(1)
	{
		cin>>x;
		if(x==0)
			break;
		v.push_back(x);
		
	}
	
	for(int i=0; i<v.size(); i++)
		sum+=v[i];
	
	cout<<(double) sum/v.size();


    return 0;
}

