#include <iostream>
int main() {
    using namespace std;
    int small_num, big_num; 
    int sum = 0;
    cout << "������һ����С������: ";
    cin >> small_num;
    cout << "������һ���ϴ������: ";
    cin >> big_num;
    for (int i = small_num; i <= big_num; ++i) {
        sum = sum + i; 
    }
    cout << "�� " << small_num << " �� " << big_num << " ֮�����������ĺ�Ϊ " << sum << "." << endl;
    return 0; 
}