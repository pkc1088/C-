#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Accumulator
{
private:
	int value;
public:
	Accumulator(int n)
	{
		this->value=n;
	}
	Accumulator& add(int n)
	{
		this->value+=n;
		return *this;
	}
	int get()
	{
		return value;
	}
};

int main(void)
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout<<acc.get();

    return 0;
}

