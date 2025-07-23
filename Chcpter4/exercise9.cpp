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
    CandyBar* snacks_ptr = new CandyBar[3];
    snacks_ptr[0] = { "Mocha Munch", 2.3, 350 };
    snacks_ptr[1] = { "Galaxy Crisp", 1.8, 280 };
    snacks_ptr[2] = { "Lion Bar", 2.5, 420 };
    cout << "Displaying all the snacks from the dynamic array:\n\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "--- Snack #" << i + 1 << " ---\n";
        cout << "Brand: " << snacks_ptr[i].brand << endl;
        cout << "Weight: " << snacks_ptr[i].weight << endl;
        cout << "Calories: " << snacks_ptr[i].calories << endl;
        cout << endl; 
    }
    delete[] snacks_ptr;
    return 0;
}