#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int WordSize = 80;
    char word[WordSize];
    int word_count = 0;
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;
    while (strcmp(word, "done") != 0)
    {
        word_count++;
        cin >> word;
    }
    cout << "You entered a total of " << word_count << " words." << endl;
    return 0;
}