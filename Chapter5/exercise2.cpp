#include <iostream>
#include <array>   
const int ArSize = 101;
int main()
{
    using namespace std;
    array<long double, ArSize> factorials;
    factorials[0] = factorials[1] = 1.0L;
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i <= 20; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    cout << "\n----------------------------------------\n";
    cout << "100! = " << factorials[100] << endl;
    return 0;
}