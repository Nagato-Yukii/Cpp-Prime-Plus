#include <iostream>
void calculate_mpg();
void calculate_liters_per_100km();
int main() 
{
    using namespace std;
    int choice;
    cout << "��ѡ����Ҫ����ĵ�λ��:" << endl;
    cout << "1. Ӣ�� (miles) �� ���� (gallons)" << endl;
    cout << "2. ���� (kilometers) �� �� (liters)" << endl;
    cout << "����������ѡ�� (1 �� 2): ";
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
        cout << "��Ч��ѡ�񡣳����˳���" << endl;
    }
    return 0;
}
void calculate_mpg()
{
    using namespace std;
    double miles, gallons;
    cout << "\n��������ʻ��Ӣ����: ";
    cin >> miles;
    cout << "���������ĵļ�����: ";
    cin >> gallons;
    if (gallons > 0) 
    {
        double mpg = miles / gallons;
    cout << "��������ȼ��Ч����: " << mpg << " Ӣ��/���� (MPG)��" << endl;
    }
    else {
     cout << "�������������0��" << endl;
    }
}
void calculate_liters_per_100km() 
{
    using namespace std;
    double kilometers, liters;
    cout << "\n��������ʻ�Ĺ�����: ";
    cin >> kilometers;
 cout << "���������ĵ�����: ";
cin >> liters;
    if (kilometers > 0) {
        double lp100km = (liters / kilometers) * 100;
        std::cout << "��������ȼ��Ч����: " << lp100km << " ��/100���" << std::endl;
    }
    else {
        std::cout << "�������������0��" << std::endl;
    }
}