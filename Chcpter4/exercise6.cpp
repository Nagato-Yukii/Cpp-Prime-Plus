#include <iostream>
#include <string> 
struct CandyBar
{
    std::string brand;
    double weight;
    int calories;
};
int main()
{
    using namespace std;
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Galaxy Crisp", 1.8, 280},
        {"Lion Bar", 2.5, 420}
    };
    cout << "Displaying all the snacks in the array:\n\n";
    for (int i = 0; i < 3; ++i)
    {
        using namespace std;
        cout << "--- Snack #" << i + 1 << " ---\n";
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;
        cout << "Calories: " << snacks[i].calories << endl;
        cout << std::endl; 
    }
    return 0;
}