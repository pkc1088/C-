#include <iostream>
#include <cstring>

using namespace std;

namespace PRINTER_CONST
{
	enum{LENGTH=100};
}

class Printer
{
	private:
		char str[PRINTER_CONST::LENGTH];
	public:
		void SetString(char *sen);
		void ShowString();
};
void Printer::SetString(char *sen)
{
	strcpy(str, sen);
}
void Printer::ShowString()
{
	cout<<str<<endl;
}
int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();
	
	pnt.SetString("I love C++");
	pnt.ShowString();
	
	return 0;
}
