#include<iostream>
int main()
{ 
using namespace std;
	const int INCHES_PER_FOOT = 12;
	int total_inches;
	cout << "���������ߣ�_\b\b";
	cin >> total_inches;
	int feet = total_inches / INCHES_PER_FOOT;
	int inches = total_inches % INCHES_PER_FOOT;
	cout << "��������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
	return 0;
}