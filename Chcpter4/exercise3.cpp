#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 40;
    char first_name[ArSize];
    char last_name[ArSize];
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    char full_name[ArSize * 2 + 2];
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;
    return 0;
}