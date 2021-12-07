#include<iostream>
using namespace std;
 
class Shape {
    Shape* next;
    Shape* pStart;
    Shape* pLast;
protected:
    virtual void draw() { cout << "---Shape---" << endl; }
public:
    Shape() { next = NULL; pStart = NULL; pLast = NULL; }
    virtual ~Shape(){}
    void paint() { draw(); }
    
	Shape* add(Shape* p) 
	{
        this->next = p;
        return p;
    }
    
    Shape* getNext() { return next; }
    
    void insert();
    void deletion();
    void show_all();
    void end();
};
 
class Circle :public Shape {
protected:
    void draw() { cout << "Circle" << endl; }
};
 
class Rect :public Shape {
protected:
    void draw() { cout << "Rect" << endl; }
};
 
class Line :public Shape {
protected:
    void draw() { cout << "Line" << endl; }
};

void Shape::insert()
{
    int choice;
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> choice;
    switch (choice) {
    case 1:
        if (pStart == NULL) {
            pStart = new Line();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Line());
        }
        break;
    case 2:
        if (pStart == NULL) {
            pStart = new Circle();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Circle());
        }
        break;
    case 3:
        if (pStart == NULL) {
            pStart = new Rect();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Rect());
        }
        break;
    }
}

void Shape::deletion()
{
    int a=0;
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> a;
    Shape* fp = pStart;
    Shape* bp = pStart;
    for (int i = 0; i < a; i++) {
        fp = fp->getNext();
    }
    for (int i = 0; i < a-1; i++) {
        bp = bp->getNext();
    }
    if (a == 0)
        pStart=fp->getNext();
    else
        bp->add(fp->getNext());
    delete fp;
}

void Shape::show_all()
{
    int index = 0;
    Shape* p = pStart;
    while (p != NULL) {
        cout << index++ << ": ";
        p->paint();
        p = p->getNext();
    }
}

void Shape::end()
{
    Shape* p = pStart;
    while (p != NULL) {
        Shape* q = p->getNext();
        delete p;
        p = q;
    }
}
 
 
int main() {
    Shape shape;
    cout << "그래픽 에디터입니다." << endl;
    int choose=0;
    while(true){
        cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        cin >> choose;
        switch (choose) {
        case 1:
            shape.insert();
            break;
        case 2:
            shape.deletion();
            break;
        case 3:
            shape.show_all();
            break;
        case 4:
            shape.end();
            break;
        }
        if (choose == 4)
            break;
    }
}

