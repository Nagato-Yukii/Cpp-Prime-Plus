#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	const int INCHES_PER_FOOT = 12;
	const double METERS_PER_INCH = 0.0254;
	const double POUNDS_PER_KG = 2.2;
	int height_feet;
	int height_inches;
	double weight_pounds;
	cout << "������ߣ�" << endl;
	cout << "Ӣ�ߣ�";
	cin >> height_feet;
	cout << "Ӣ�磺";
	cin >> height_inches;
	cout << "����";
	cin >> weight_pounds;
	int total_inches = height_feet * INCHES_PER_FOOT + height_inches;
	double height_meters = total_inches * METERS_PER_INCH;
	double weight_kg = weight_pounds / POUNDS_PER_KG;
	double bmi = weight_kg / pow(height_meters, 2);
	cout << "--------" << endl;
	cout << "���Ϊ" << height_feet << "Ӣ��" << height_inches << "Ӣ��" << endl;
	cout << "����Ϊ" << weight_pounds << "��" << endl;
	cout << "BMIΪ" << bmi << endl;
	return 0;

}