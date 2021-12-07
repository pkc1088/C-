#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class LoopAdder
{
private :
    string name;
    int x,y,sum;
    
	void read()
    {
    	cout<< name<<":"<<'\n';
    	cout<<"처음 수에서 두번째 수까지 더합니다.두 수를 입력하세요>> ";
    	cin>>x>>y;
	}
    
	void write()	
	{
		cout<<x<<"에서"<<y<<"까지의 합 = "<<sum<<" 입니다"<<'\n';
	}

protected :
    LoopAdder(string name = "")
	{
        this->name = name;
    }
    int getx(){return x;}
	int gety(){return y;}
	virtual int calculate() = 0;

public :
    void run()
    {
    	read();
    	sum = calculate();
    	write();
	}
};

class WhileLoopAdder : public LoopAdder
{
private :
	int sum=0;
public :
	WhileLoopAdder(string name) : LoopAdder(name)
	{}
	int calculate()
	{
		for(int i=getx(); i<=gety(); i++)
			sum+=i;
		return sum;
	}
};

class DoWhileLoopAdder : public LoopAdder
{
private :
	int sum=0;
public :
	DoWhileLoopAdder(string name) : LoopAdder(name)
	{}
	int calculate()
	{
		for(int i=getx(); i<=gety(); i++)
			sum+=i;
		return sum;
	}
};


int main(void)
{
	WhileLoopAdder whileLoop("while loop");
	DoWhileLoopAdder doWhileLoop("do while loop");
	whileLoop.run();
	doWhileLoop.run();
    return 0;
}

