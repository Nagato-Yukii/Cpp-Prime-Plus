#include<iostream>
int main()
{
	using namespace std;
	const int INCHES_PER_FOOT = 12;
	int total_inches_input;
	int inches;
	cout << "Enter your height in integer inches:____";
	cin >> total_inches_input;
	int foot = inches / 12;
	cout << inches << "inches are" << foot << "foot(s).\n";
	return 0;

}