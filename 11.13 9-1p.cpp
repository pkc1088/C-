#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Converter
{
protected :
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public :
    Converter(double ratio){this->ratio = ratio;}
    
	void run()
    {
        double src;
        cout<<getSourceString()<<"�� "<<getDestString()<<"���� �ٲߴϴ�."<<'\n';
        cout<<getSourceString()<<"�� �Է��ϼ���>>";
        cin>>src;
        cout<<"��ȯ ��� : "<<convert(src)<<getDestString()<<'\n';
    }
};

class WonToDollar : public Converter
{
public :
	WonToDollar(double ratio) : Converter(ratio)
	{}
	
	virtual double convert(double src)
	{
		return src / ratio;  //protected�� ratio ������ �� �� �ִ°��� 
	}
			
	virtual string getSourceString()
	{
		return "��"; 
	}
	
	virtual string getDestString()
	{
		return "�޷�"; 
	}
	
};

int main(void)
{
	WonToDollar wd(1010);
	wd.run();		//wd�� ��ӹ޾����� Converter Ŭ������ �Լ� ���� ����.. 

    return 0;
}

