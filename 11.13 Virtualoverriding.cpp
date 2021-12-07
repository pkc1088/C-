#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
	virtual void vf() { cout << "Base::vf() called" << endl; }

};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
	virtual void vf() { cout << "Derived::vf() called" << endl; }

};

int main(void) 
{

	Derived d, *pDer;
	pDer = &d;	
	
	Base* pBase;
	pBase = pDer;	// pBase=&d; 혹은  pBase=new Derived; 도 가능 
	
	pBase->f(); //일반 오버라이딩은 자기 자신의 함수만 접근시킴 
	pDer->f(); 	//기본적으로 자기자신 출력 
	pDer->Base::f();	//하지만 pDer은 pBase것도 가지므로 명시적으로 호출가능 
	
	cout<<endl; 
	
	pBase->vf(); //가상함수 오버라이딩은 마지막껄 컴파일 (동적바인딩) 
	pDer->vf();	//마지막껄 컴파일 
	
	return 0;
}
