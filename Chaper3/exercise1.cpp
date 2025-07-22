#include<iostream>
int main()
{ 
using namespace std;
	const int INCHES_PER_FOOT = 12;
	int total_inches;
	cout << "输入你的身高：_\b\b";
	cin >> total_inches;
	int feet = total_inches / INCHES_PER_FOOT;
	int inches = total_inches % INCHES_PER_FOOT;
	cout << "你的身高是" << feet << "英尺" << inches << "英寸" << endl;
	return 0;
}