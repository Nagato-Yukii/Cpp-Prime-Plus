#include<iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division:9/5=" << 9 / 5 << endl;
	cout << "Floating-point division:9.0/5.0=";
	cout << 9.0 / 5.0<<endl;
	cout << "Mixed division:9.0/5=" << 9.0 / 5 << endl;
	cout << "double constants:1.e7f/9.0f<<endl";
		return 0; 
}