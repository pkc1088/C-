#include <iostream>
#include <cstring>
#include <string>
using namespace std;
static int j=0;
class Statics 
{
private:
	int *data;
	int cnt;
public:
	Statics()
	{
		data=new int[100];
		cnt=0;
	}
	
 	void operator>>(int& op2) 
	 {
        op2 = 0;
        for (int i = 0; i < cnt; i++)
            op2 += data[i];
        
        op2 /= cnt;
    }
	
	Statics& operator<< (int i)
	{
		
		*(data+cnt)=i;
		cnt++;
		
		return *this;	//100������ 200�� <<�̰ɷ� �����ϱ� &��ȯ.. 
	}
	
	void operator~()
	{
		for(int i=0; i<cnt; i++)
		{
			cout<<*(data+i)<<' ';
		}
		cout<<endl;
	}
	
	bool operator!()
	{
		if(cnt==0)
			return true;
		return false;
	}
};

int main(void)
{
	Statics stat;
	if(!stat) cout<<"���� ��� �����Ͱ� �����ϴ�."<<endl;
	
	int x[5];
	
	cout <<"5 ���� ������ �Է��϶�>>";
	
	for(int i=0; i<5; i++)
		cin>>x[i];
	
	for(int i=0; i<5; i++)
		stat<<x[i];
	
	stat << 100 << 200;
	
	~stat;
	
	int avg;
	stat >> avg;
	cout<< "avg="<<avg<<endl; 

    return 0;
}

