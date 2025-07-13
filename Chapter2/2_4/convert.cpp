//convert.cpp -- converts stone to pounds
#include <iostream>
int stoneto1b(int);
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone:" ;
    cin >> stone;
    int pounds = stoneto1b(stone);
    cout << stone << "stone = ";
    cout << pounds << "pounds." << endl;
    return 0;
}

int stoneto1b(int sts)
{
    return 14 * sts;
}