#include <iostream>
using namespace std;

int findMaxConsecutiveRepeats(const string &inputString)
{
    int maxRepeats = 1;
    int currentRepeats = 1;

    for (size_t i = 1; i < inputString.length(); i++)
    {
        if (inputString[i] == inputString[i - 1])
        {
            currentRepeats++;
        }
        else
        {
            maxRepeats = max(maxRepeats, currentRepeats);
            currentRepeats = 1;
        }
    }

    maxRepeats = max(maxRepeats, currentRepeats);

    return maxRepeats;
}

int main()
{
    cout << "Enter a string of characters (e.g., ABABBBBBAA): ";

    string userInputString;

    getline(cin, userInputString);

    cout << "\nInput String: " << userInputString << endl;

    cout << "Maximum Consecutive Repeats: " << findMaxConsecutiveRepeats(userInputString) << endl;

    return 0;
}