#include<iostream>

int main()
{
	using namespace std;

	int length;

	cout << "How many length do you want to input?" << endl;
	cin >> length;
	int codes = length* 220;
	cout << "Now you have" << codes << "codes" << endl;
	return 0;
}