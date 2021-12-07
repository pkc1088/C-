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
	pBase = pDer;	// pBase=&d; Ȥ��  pBase=new Derived; �� ���� 
	
	pBase->f(); //�Ϲ� �������̵��� �ڱ� �ڽ��� �Լ��� ���ٽ�Ŵ 
	pDer->f(); 	//�⺻������ �ڱ��ڽ� ��� 
	pDer->Base::f();	//������ pDer�� pBase�͵� �����Ƿ� ��������� ȣ�Ⱑ�� 
	
	cout<<endl; 
	
	pBase->vf(); //�����Լ� �������̵��� �������� ������ (�������ε�) 
	pDer->vf();	//�������� ������ 
	
	return 0;
}
