#include <iostream>
#include <string> 
const int MONTHS_IN_YEAR = 12;
int main()
{
    using namespace std;
    const string months[MONTHS_IN_YEAR] =
    {
        "һ��", "����", "����", "����", "����", "����",
        "����", "����", "����", "ʮ��", "ʮһ��", "ʮ����"
    };
    int monthly_sales[MONTHS_IN_YEAR];
    for (int i = 0; i < MONTHS_IN_YEAR; ++i)
    {
        cout << "������ " << months[i] << " �������� (ͼ������): ";
        cin >> monthly_sales[i];
    }
    int total_sales = 0;
    for (int i = 0; i < MONTHS_IN_YEAR; ++i)
    {
        total_sales += monthly_sales[i]; 
    }
    cout << "\n----------------------------------------\n";
    cout << "��C++ For Fools���Ȿ���ȫ����������Ϊ: " << total_sales << " ����" << endl;
    return 0;
}