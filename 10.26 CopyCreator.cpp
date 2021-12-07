#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
	private:
		int num;
	public:
		SoSimple()
		{
			cout<<"Default"<<endl;			
		}	
		SoSimple(int n) : num(n)
		{
			cout<<"New object: "<<this<<" Value: "<<this->num<<endl;
		}
};
SoSimple SimpleFuncObj(SoSimple ob)
{
	cout<<"Value : "<<&ob<<endl;
	return ob;
}
int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);
	SoSimple tempRef=SimpleFuncObj(obj);
	cout<<&tempRef<<endl;
	return 0;
}
