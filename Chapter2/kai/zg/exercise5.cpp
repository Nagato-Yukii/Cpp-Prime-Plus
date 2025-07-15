#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	double Celsius;
	cout << "Please enter a Celsius value:";
	cin >> Celsius;
	double Fahrenheit;
	Fahrenheit = Celsius*1.8+32.0;
	cout << Celsius << "degrees Celsius is" << Fahrenheit << "degrees Fahrenheit";
	return 0;
}