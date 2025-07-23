#include <iostream>
#include <string>
struct PizzaInfo
{
    std::string company_name;
    double diameter;
    double weight;
};
int main()
{
    using namespace std;
    PizzaInfo pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cin.get();
    cout << "Enter the name of the pizza company: ";
    getline(cin, pizza.company_name);
    cout << "Enter the weight of the pizza: ";
    cin >> pizza.weight;
    cout << "\n--- Pizza Analysis Report ---\n";
    cout << "Company: " << pizza.company_name << endl;
    cout << "Diameter: " << pizza.diameter << " inches" << endl;
    cout << "Weight: " << pizza.weight << " grams" << endl;
    return 0;
}