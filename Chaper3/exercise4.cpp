#include<iostream>
int main()
{
	using namespace std;
	const int HOURS_PER_DAY = 24;
	const int MINS_PER_HOUR = 60;
	const int SECS_PER_MIN = 60;
	long long total_seconds_input;
	cout << "Enter the number of seconds: ";
    cin >> total_seconds_input;
	long long remaining_seconds = total_seconds_input;
	int days = remaining_seconds / (SECS_PER_MIN * MINS_PER_HOUR * HOURS_PER_DAY);
	remaining_seconds %= (SECS_PER_MIN * MINS_PER_HOUR * HOURS_PER_DAY);
	int hours = remaining_seconds / (SECS_PER_MIN * MINS_PER_HOUR);
	remaining_seconds %= (SECS_PER_MIN * MINS_PER_HOUR);
	int minutes = remaining_seconds / SECS_PER_MIN;
	int seconds = remaining_seconds % SECS_PER_MIN;
	cout << total_seconds_input << " seconds = "
		<< days << " days, "
		<< hours << " hours, "
		<< minutes << " minutes, "
		<< seconds << " seconds" << endl;

	return 0;
}