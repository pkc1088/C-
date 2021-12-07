#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	[](int x, int y) ->int {cout<<x+y<<endl;}(2,3);
	
	auto love = [](string a, string b)
	{
		cout<<a<<"���� "<<b<<"�� ����"<<endl; 
	};
	love("��", "��");
	
	double pi=3.14;
	auto calc = [pi](int r)->double{return pi*r*r;};
	cout<<pi<<"  "<<calc(3)<<endl;
	
	[&pi](double r){pi+=r;}(1.1);
	cout<<"pi�� ��ȭ "<<pi<<endl;
	
	
	
	
    return 0;
}

