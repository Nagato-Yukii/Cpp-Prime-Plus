//exercise1.cpp -- show your name and address

#include <iostream>
using namespace std;

void answer(string , string);

int main()
{
    cout << "Pick your name:";
    string name;
    cin >> name;

    cout << "Pick your address:";
    string address;
    cin >> address;

    answer(name, address);

    return 0;
}

void answer(string a, string b)
{
    cout << "your name is " << a << " and your address is " << b;
}