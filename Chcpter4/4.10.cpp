#include<iostream>
#include<string>
#include <cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;
	cout << "Lengthg of string in charr before input:"<<strlen(charr)<<endl;
	cout << "Length of string in str before input:" << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "You entered:" << str << endl;
	cout << "Length of string in charr after input:" << strlen(charr) << endl;
	cout << "Length of string in str after input:" << str.size() << endl;
	return 0;

}