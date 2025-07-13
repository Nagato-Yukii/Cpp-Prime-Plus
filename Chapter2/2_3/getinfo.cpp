//getinfo.cpp -- input and output
#include<iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do u have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    //the next line concatenates output
    cout << "Now u have " << carrots << " carrots." <<endl;
    return 0;
}