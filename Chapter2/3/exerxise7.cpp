#include <iostream>
int main() 
{
    using namespace std;
    const double MILES_PER_100KM = 62.14;
    const double LITERS_PER_GALLON = 3.875;
    double liters_per_100km;
   cout << "������ŷ�޷��������ͺ� (��/100����): ";
    cin >> liters_per_100km;
    double miles_per_gallon = (MILES_PER_100KM * LITERS_PER_GALLON) / liters_per_100km;
    cout << "-------------------------------------------" << endl;
    cout << "��������ͺ���: " << liters_per_100km << " ��/100����" << endl;
    cout << "ת�������������ͺ���: " << miles_per_gallon << " Ӣ��/���� (MPG)" << endl;
    return 0;
}