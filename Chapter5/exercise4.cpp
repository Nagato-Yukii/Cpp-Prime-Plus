#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    const double initial_investment = 100.0;
    double daphne_value = initial_investment;
    const double daphne_interest_rate = 0.10;
    const double daphne_annual_profit = initial_investment * daphne_interest_rate;
    double cleo_value = initial_investment;
    const double cleo_interest_rate = 0.05;
    int years = 0;
    cout << fixed << setprecision(2);
    cout << "���\tDaphne ���ܶ�\tCleo ���ܶ�" << endl;
    cout << "----------------------------------------" << endl;
    while (cleo_value <= daphne_value)
    {
        cout << years << "\t$" << daphne_value << "\t\t$" << cleo_value << endl;
        years++;
        daphne_value += daphne_annual_profit;
        cleo_value += cleo_value * cleo_interest_rate;
    }
    cout << years << "\t$" << daphne_value << "\t\t$" << cleo_value << endl;
    cout << "----------------------------------------" << endl << endl;
    cout << "�ڵ� " << years << " �꣬Cleo ��Ͷ�ʼ�ֵ�״γ����� Daphne��" << endl;
    cout << "��ʱ��" << endl;
    cout << "  Daphne ��Ͷ�ʼ�ֵΪ: $" << daphne_value << endl;
    cout << "  Cleo ��Ͷ�ʼ�ֵΪ:   $" << cleo_value << endl;
    return 0;
}