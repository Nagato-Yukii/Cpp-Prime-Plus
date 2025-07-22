#include <iostream>

int main()
{
    using namespace std;
    long long world_population;
    long long us_population;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    double percentage = (double(us_population) / double(world_population)) * 100.0;
    cout << "The population of the US is " << percentage
        << "% of the world population." << endl;
    return 0;
}