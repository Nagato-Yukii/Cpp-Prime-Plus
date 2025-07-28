#include <iostream>
int main() {
    using namespace std;
    double number;    
    double sum = 0.0; 
    cout << "本程序会持续计算您输入数字的累计和。" << endl;
    cout << "请输入数字 (输入 0 即可结束程序)。" << endl;
    do {
        cout << "\n请输入一个数字: ";
        cin >> number;
        sum += number;
        cout << "到目前为止，所有输入的累计和为: " << sum << endl;
    } while (number != 0); 
    cout << "\n您输入了 0，程序已结束。" << endl;
    return 0;
}