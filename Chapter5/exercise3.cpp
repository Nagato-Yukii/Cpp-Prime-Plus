#include <iostream>
int main() {
    using namespace std;
    double number;    
    double sum = 0.0; 
    cout << "�����������������������ֵ��ۼƺ͡�" << endl;
    cout << "���������� (���� 0 ���ɽ�������)��" << endl;
    do {
        cout << "\n������һ������: ";
        cin >> number;
        sum += number;
        cout << "��ĿǰΪֹ������������ۼƺ�Ϊ: " << sum << endl;
    } while (number != 0); 
    cout << "\n�������� 0�������ѽ�����" << endl;
    return 0;
}