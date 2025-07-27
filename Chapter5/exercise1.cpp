#include <iostream>
int main() {
    using namespace std;
    int small_num, big_num; 
    int sum = 0;
    cout << "请输入一个较小的整数: ";
    cin >> small_num;
    cout << "请输入一个较大的整数: ";
    cin >> big_num;
    for (int i = small_num; i <= big_num; ++i) {
        sum = sum + i; 
    }
    cout << "从 " << small_num << " 到 " << big_num << " 之间所有整数的和为 " << sum << "." << endl;
    return 0; 
}