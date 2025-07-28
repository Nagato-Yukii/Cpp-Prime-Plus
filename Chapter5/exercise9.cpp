#include <iostream>
#include <string> 
int main()
{
    using namespace std;
    string word;
    int word_count = 0;
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    while (word != "done")
    {
        word_count++;
        cin >> word;
    }
    cout << "You entered a total of " << word_count << " words." << endl;
    return 0;
}