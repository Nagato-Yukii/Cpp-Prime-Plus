#include <iostream>
#include <string>
struct car
{
    std::string make; 
    int year;         
};
int main()
{
    using namespace std;
    cout << "How many cars do you wish to catalog? ";
    int num_cars;
    cin >> num_cars;
    car* p_cars = new car[num_cars];
    for (int i = 0; i < num_cars; ++i)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin >> ws, p_cars[i].make);
        cout << "Please enter the year made: ";
        cin >> p_cars[i].year;
    }
    cout << "\nHere is your collection:" << endl;
    for (int i = 0; i < num_cars; ++i)
    {
        cout << p_cars[i].year << " " << p_cars[i].make << endl;
    }
    delete[] p_cars;
    p_cars = nullptr; 
    return 0;
}