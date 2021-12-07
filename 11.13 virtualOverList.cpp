#include <iostream>
#include <string>
using namespace std;

class Shape 
{
	Shape* next;

protected:
	
	virtual void draw() 
	{
		cout << "Shape" << endl;
	}	
	
public:
	
	Shape() { next = NULL;}
	
	virtual ~Shape() { }
	
	void paint()
	{
		draw();
	}
	
	Shape* add(Shape* p)
	{
		this->next = p;
		return p;
	}
	
	Shape* getNext() { return next;}
};


class Rect : public Shape 
{
protected:
	virtual void draw()
	{
		cout << "Rectangle" << endl; 
	}
};


class Circle : public Shape 
{
protected:
	virtual void draw()
	{
		cout << "Circle" << endl;
	}
};

class Line : public Shape 
{
protected:
	virtual void draw()
	{
		cout << "Line" << endl;
	}
};

int main() 
{
	Shape *pStart=NULL;
	Shape *pLast;

	pStart = new Circle(); // ó���� �� ������ �����Ѵ�.
	pLast = pStart;

	pLast = pLast->add(new Rect()); // �簢�� ��ü ����
	pLast = pLast->add(new Circle()); // �� ��ü ����
	pLast = pLast->add(new Line()); // �� ��ü ����
	pLast = pLast->add(new Rect()); // �簢�� ��ü ����

	// ���� ����� ��� ������ ȭ�鿡 �׸���.
	Shape* p = pStart;
	while(p != NULL) 
	{
		p->paint();
		p = p->getNext();
	}

	// ���� ����� ��� ������ �����Ѵ�.
	p = pStart;
	while(p != NULL) 
	{
		Shape* q = p->getNext(); // ���� ���� �ּ� ���
		delete p; // �⺻ Ŭ������ ���� �Ҹ��� ȣ��
		p = q; // ���� ���� �ּҸ� p�� ����
	}
}
