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
	cout << "输入身高：" << endl;
	cout << "英尺：";
	cin >> height_feet;
	cout << "英寸：";
	cin >> height_inches;
	cout << "体重";
	cin >> weight_pounds;
	int total_inches = height_feet * INCHES_PER_FOOT + height_inches;
	double height_meters = total_inches * METERS_PER_INCH;
	double weight_kg = weight_pounds / POUNDS_PER_KG;
	double bmi = weight_kg / pow(height_meters, 2);
	cout << "--------" << endl;
	cout << "身高为" << height_feet << "英尺" << height_inches << "英寸" << endl;
	cout << "体重为" << weight_pounds << "磅" << endl;
	cout << "BMI为" << bmi << endl;
	return 0;

}