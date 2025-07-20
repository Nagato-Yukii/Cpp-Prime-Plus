#include <iostream>
void calculate_mpg();
void calculate_liters_per_100km();
int main() 
{
    using namespace std;
    int choice;
    cout << "请选择您要输入的单位制:" << endl;
    cout << "1. 英里 (miles) 和 加仑 (gallons)" << endl;
    cout << "2. 公里 (kilometers) 和 升 (liters)" << endl;
    cout << "请输入您的选择 (1 或 2): ";
    cin >> choice;
    if (choice == 1) 
    {
        calculate_mpg();
    }
    else if (choice == 2) 
    {
        calculate_liters_per_100km();
    }
    else
    {
        cout << "无效的选择。程序将退出。" << endl;
    }
    return 0;
}
void calculate_mpg()
{
    using namespace std;
    double miles, gallons;
    cout << "\n请输入行驶的英里数: ";
    cin >> miles;
    cout << "请输入消耗的加仑数: ";
    cin >> gallons;
    if (gallons > 0) 
    {
        double mpg = miles / gallons;
    cout << "您的汽车燃油效率是: " << mpg << " 英里/加仑 (MPG)。" << endl;
    }
    else {
     cout << "加仑数必须大于0。" << endl;
    }
}
void calculate_liters_per_100km() 
{
    using namespace std;
    double kilometers, liters;
    cout << "\n请输入行驶的公里数: ";
    cin >> kilometers;
 cout << "请输入消耗的升数: ";
cin >> liters;
    if (kilometers > 0) {
        double lp100km = (liters / kilometers) * 100;
        std::cout << "您的汽车燃油效率是: " << lp100km << " 升/100公里。" << std::endl;
    }
    else {
        std::cout << "公里数必须大于0。" << std::endl;
    }
}