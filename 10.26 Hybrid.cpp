#include <iostream>
#include <cstring>
using namespace std;

class Car
{
	private:
		int gasolineGauge;
	public:
		Car() : gasolineGauge(10)
		{
			cout<<"Called Car()"<<endl;
		}
		Car(int t1) : gasolineGauge(t1)
		{
			cout<<"Called Car(t1)"<<endl;
		}
		int GetGasGauge()
		{
			return gasolineGauge;
		}
};

class HybridCar : public Car
{
	private:
		int electricGauge;
	public:
		HybridCar() : electricGauge(20)
		{
			cout<<"Called HybridCar()"<<endl;
		}
		HybridCar(int m1, int m2) : Car(m1), electricGauge(m2)
		{
			cout<<"Called HybridCar(m1, m2)"<<endl;
		}
		int GetElecGauge()
		{
			return electricGauge;
		}
};

class HybridWaterCar : public HybridCar
{
	private:
		int waterGauge;
	public:
		HybridWaterCar() : waterGauge(30)
		{
			cout<<"Called HybridWaterCar()"<<endl;
		}
		HybridWaterCar(int n1, int n2, int n3) 
			: HybridCar(n1, n2), waterGauge(n3)
		{
			cout<<"Called HybridWaterCar(n1,n2,n3)"<<endl;
		}
		void ShowCurrentGauge()
		{
			cout<<"ÀÜ¿© °¡¼Ö¸°: "<<GetGasGauge()<<endl;
			cout<<"ÀÜ¿© Àü±â·®: "<<GetElecGauge()<<endl;
			cout<<"ÀÜ¿© ¿öÅÍ·®: "<<waterGauge<<endl;
		}
};

int main(void)
{
	HybridWaterCar water;
	water.ShowCurrentGauge();
	HybridWaterCar water2(100, 200, 300);
	water2.ShowCurrentGauge();
	
	return 0;
}
