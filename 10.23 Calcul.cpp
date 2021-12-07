#include <iostream>
#include <cstring>
using namespace std;

class Calculator
{
	private:
		int num1,num2,num3,num4;
	public:
		void Add(double a, double b);
		void Min(double a, double b);
		void Mul(double a, double b);
		void Div(double a, double b);
		void ShowOpCount();
		void Init();
};
void Calculator::Init()
{
	num1=num2=num3=num4=0;
}
void Calculator::Add(double a, double b)
{
	cout<<a+b<<endl;
	num1++;	
}
void Calculator::Min(double a, double b)
{
	cout<<a-b<<endl;
	num2++;		
}
void Calculator::Mul(double a, double b)
{
	cout<<a*b<<endl;
	num3++;		
}
void Calculator::Div(double a, double b)
{
	cout<<a/b<<endl;
	num4++;		
}
void Calculator::ShowOpCount()
{
	cout<<"µ¡¼À: "<<num1<<' '<<
	"–E¼À : "<<num2<<' '<<
	"°ö¼À : "<<num3<<' '<<
	"³ª´°¼À : "<<num4<<' '<<endl;
}
int main(void)
{
	Calculator cal;
	cal.Init();
	cout<<"3.2 + 2.4 = ";	cal.Add(3.2, 2.4);	cout<<endl;
	cout<<"3.5 / 1.7 = ";	cal.Div(3.5, 1.7);	cout<<endl;
	cout<<"2.2 - 1.5 = ";	cal.Min(2.2, 1.5);	cout<<endl;
	cout<<"4.9 / 1.2 = ";	cal.Div(4.9, 1.2);	cout<<endl;
	cal.ShowOpCount();
	return 0;
}
