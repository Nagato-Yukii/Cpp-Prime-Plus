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
    CandyBar snack = { "Mocha Munch", 2.3, 350 };
    cout << "Here are the details of your snack:" << endl;
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;
    return 0;
}