#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;


class Random
{
public:
	Random()
	{
		srand((unsigned)time(0));
	}

	int next()
	{
		int b;
		b= rand();
		return b;
	}
	int nextInRange(int min, int max)
	{
		int a;
		while(1)
		{
		a=rand();
		
		if(a<=max && a>=min)
			break;
		}
		
		return a;	
	}
};

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for(int i=0; i<10; i++) {
		int n = r.next(); 
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for(int i=0; i<10; i++) {
		int n = r.nextInRange(2, 4); 
		cout << n << ' ';
	}
	cout << endl;
}
