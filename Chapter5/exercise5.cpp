#include <iostream>
#include <string> 
const int MONTHS_IN_YEAR = 12;
int main()
{
    using namespace std;
    const string months[MONTHS_IN_YEAR] =
    {
        "一月", "二月", "三月", "四月", "五月", "六月",
        "七月", "八月", "九月", "十月", "十一月", "十二月"
    };
    int monthly_sales[MONTHS_IN_YEAR];
    for (int i = 0; i < MONTHS_IN_YEAR; ++i)
    {
        cout << "请输入 " << months[i] << " 的销售量 (图书数量): ";
        cin >> monthly_sales[i];
    }
    int total_sales = 0;
    for (int i = 0; i < MONTHS_IN_YEAR; ++i)
    {
        total_sales += monthly_sales[i]; 
    }
    cout << "\n----------------------------------------\n";
    cout << "《C++ For Fools》这本书的全年总销售量为: " << total_sales << " 本。" << endl;
    return 0;
}