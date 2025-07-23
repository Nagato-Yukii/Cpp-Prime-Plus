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
    PizzaInfo* pizza_ptr = new PizzaInfo;
    cout << "This program analyzes pizza information dynamically!\n";
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza_ptr->diameter;
    cin.get();
    cout << "Enter the name of the pizza company: ";
    getline(cin, pizza_ptr->company_name);
    cout << "Enter the weight of the pizza: ";
    cin >> pizza_ptr->weight;
    cout << "\n--- Pizza Analysis Report (from dynamic memory) ---\n";
    cout << "Company: " << pizza_ptr->company_name << endl;
    cout << "Diameter: " << pizza_ptr->diameter << " inches" << endl;
    cout << "Weight: " << pizza_ptr->weight << " grams" << endl;
    delete pizza_ptr;
    return 0;
}