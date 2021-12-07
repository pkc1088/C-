#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Buffer
{
private:
	string text;
public:
	Buffer(string text) {this->text = text;}
	void add(string next){text+=next;}
	void print() {cout<<text<<endl;}
};

Buffer& append(Buffer& s, string str)
{
	s.add(str);
		
	return s;
}

int main(void)
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();

    return 0;
}

