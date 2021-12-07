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
        cout<<getSourceString()<<"을 "<<getDestString()<<"으로 바꿉니다."<<'\n';
        cout<<getSourceString()<<"을 입력하세요>>";
        cin>>src;
        cout<<"변환 결과 : "<<convert(src)<<getDestString()<<'\n';
    }
};

class WonToDollar : public Converter
{
public :
	WonToDollar(double ratio) : Converter(ratio)
	{}
	
	virtual double convert(double src)
	{
		return src / ratio;  //protected라서 ratio 가져다 쓸 수 있는거임 
	}
			
	virtual string getSourceString()
	{
		return "원"; 
	}
	
	virtual string getDestString()
	{
		return "달러"; 
	}
	
};

int main(void)
{
	WonToDollar wd(1010);
	wd.run();		//wd는 상속받았으니 Converter 클래스의 함수 접근 가능.. 

    return 0;
}

