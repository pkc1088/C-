#include <iostream>
#include <map>

bool fncomp(char lhs, char rhs) { return lhs < rhs; }
using namespace std;

struct classcomp {
	bool operator() (const char& lhs, const char& rhs) const
	{
		return lhs < rhs;
	}
};

int main()
{
	std::map<char, int> first;

	first['a'] = 10;
	first['b'] = 30;
	first['c'] = 50;
	first['d'] = 70;

	std::map<char, int, classcomp> second;                 // class as Compare

	map<char, int>::iterator i;
	cout << "first" << endl;
	for (i = first.begin(); i != first.end(); i++)
		cout << "[" << i->first << "] = " << i->second << endl;

	second['f'] = 10;
	second['e'] = 30;
	second['z'] = 50;
	second['a'] = 70;

	cout << "second" << endl;
	for (i = second.begin(); i != second.end(); i++)
		cout << "[" << i->first << "] = " << i->second << endl;

	return 0;
}

