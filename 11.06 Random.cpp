#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

class Random {
public:
	Random(); 
	int nextInRange(int low, int high); 
};
Random::Random() {
	srand((unsigned)time(0)); 
}
int Random::nextInRange(int low, int high) {
    int range=(high-low)+1;
    return rand() % range; 
}

int main() {
	Random r;
	int sum=0, arr[100]={0};
	
	cout<< "ÁøÈ£°¡ ¿©ÀÚ ²¿½Ç È®·ü" << endl;
	for(int i=0; i<100; i++) {
		arr[i] = r.nextInRange(0, 100); 
		cout << arr[i] << ' ';
	}
	
	cout<<endl<< "Æò±Õ È®·ü"<<endl; 
	for(int i=0; i<100; i++) 
	{
		sum+=arr[i];
	}
	
	cout << sum/100<<endl;
}
