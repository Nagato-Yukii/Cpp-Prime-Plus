#include <iostream>
#include <array>  
int main()
{
    using namespace std;
    array<double, 3> scores;
    cout << "Please enter your time for the 40-yard dash three times.\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter score #" << i + 1 << ": ";
        cin >> scores[i];
    }
    double total_score = scores[0] + scores[1] + scores[2];
    double average_score = total_score / 3.0;
    cout << "\n--- Results ---\n";
    cout << "You entered the following " << scores.size() << " scores:\n";
    cout << "Score 1: " << scores[0] << endl;
    cout << "Score 2: " << scores[1] << endl;
    cout << "Score 3: " << scores[2] << endl;
    cout << "Average time: " << average_score << " seconds.\n";
    return 0;
}