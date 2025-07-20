#include<iostream>
int main()
{
	using namespace std;
	const int MIN_PER_DEG = 60;
	const int SEC_PER_MIN = 60;
	int degrees;
	int minutes;
	int seconds;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	double total_degrees = degrees + (double)minutes / MIN_PER_DEG + (double)seconds / (MIN_PER_DEG * SEC_PER_MIN);
	cout << degrees << "degrees," << minutes << "minutes," << seconds << "seconds" << total_degrees << "degrees" << endl;
	return 0;
}