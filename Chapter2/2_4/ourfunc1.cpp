// ourfunc1.cpp -- repositioning the using directive
#include <iostream>
using namespace std; //affects the function definations in this file
void simon(int);

int main()
{
    simon(3);
    cout << "Pick an integer:";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" <<endl;
    return 0;
}

void simon(int n)
{
    cout << "Simon says touch your toes " << n << " times." << endl;
}