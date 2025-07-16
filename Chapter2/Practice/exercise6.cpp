#include<iostream>
#include<cmath>
 
int main()
{
	using namespace std;
	
	double lightyears;
	double astronomicalunits;
	cout << "Enter the number of light years:" << endl;
	cin >> lightyears;
	astronomicalunits = lightyears*63240;
	cout << lightyears << "light years=" << astronomicalunits << "astronmical units" << endl;
	return 0;
}