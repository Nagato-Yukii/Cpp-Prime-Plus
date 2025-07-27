#include <iostream>
#include <string>
const int YEARS = 3;
const int MONTHS_IN_YEAR = 12;
int main()
{
    using namespace std;
    const string months[MONTHS_IN_YEAR] =
    {
        "一月", "二月", "三月", "四月", "五月", "六月",
        "七月", "八月", "九月", "十月", "十一月", "十二月"
    };
    int sales[YEARS][MONTHS_IN_YEAR];
    for (int y = 0; y < YEARS; ++y)
    {
        cout << "\n--- 请输入第 " << y + 1 << " 年的数据 ---" << endl;
        for (int m = 0; m < MONTHS_IN_YEAR; ++m)
        {
            cout << "请输入 " << months[m] << " 的销售量: ";
            cin >> sales[y][m];
        }
    }
    cout << "\n\n======== 销售报告 ========" << endl;
    int grand_total = 0;
    for (int y = 0; y < YEARS; ++y) 
    {
        int yearly_total = 0;
        for (int m = 0; m < MONTHS_IN_YEAR; ++m) 
        {
            yearly_total += sales[y][m]; 
        }
        cout << "第 " << y + 1 << " 年的总销售量为: " << yearly_total << " 本。" << endl;
        grand_total += yearly_total;
    }
    cout << "\n----------------------------" << endl;
    cout << "三年的总销售量为: " << grand_total << " 本。" << endl;
    cout << "============================" << endl;
    return 0;
}