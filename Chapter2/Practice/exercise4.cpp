#include<iostream>

int main()
{
	using namespace std;
	int ages;
	int months;
	cout << "How old are you?" << endl;
	cin >> ages;
	months = ages * 12;
	cout << "Now you have" << months << "months" << endl;
	return 0;
}