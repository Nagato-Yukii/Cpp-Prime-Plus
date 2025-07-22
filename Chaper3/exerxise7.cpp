#include <iostream>
int main() 
{
    using namespace std;
    const double MILES_PER_100KM = 62.14;
    const double LITERS_PER_GALLON = 3.875;
    double liters_per_100km;
   cout << "请输入欧洲风格的汽车油耗 (升/100公里): ";
    cin >> liters_per_100km;
    double miles_per_gallon = (MILES_PER_100KM * LITERS_PER_GALLON) / liters_per_100km;
    cout << "-------------------------------------------" << endl;
    cout << "您输入的油耗是: " << liters_per_100km << " 升/100公里" << endl;
    cout << "转换后的美国风格油耗是: " << miles_per_gallon << " 英里/加仑 (MPG)" << endl;
    return 0;
}