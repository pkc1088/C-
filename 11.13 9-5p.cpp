#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class AbstractGate 
{
protected:
    bool x, y;
public:
    void set(bool x, bool y) { this->x = x; this->y = y; }
    virtual bool operation()=0;
};

class ANDGate : public AbstractGate
{
public:

	bool operation()
	{
		if(x==true && y==true)
			return true;
		return false;
	} 
	
};

class ORGate : public AbstractGate
{
public:
	
	bool operation()
	{
		if(x==false && y==false)
			return false;
		return true;
	} 
};

class XORGate : public AbstractGate
{
public:

	bool operation()
	{
		if(x==true && y==true)
			return false;
		return true;
	} 
};

int main(void)
{
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;
    
	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	cout.setf(ios::boolalpha); // 불린 값을 "true", "false" 문자열로 출력할 것을 지시 
	cout << andGate.operation() << endl; // AND 결과는 false 
	cout << orGate.operation() << endl;     // OR 결과는 true 
	cout << xorGate.operation() << endl; // XOR 결과는 true 

    return 0;
}

