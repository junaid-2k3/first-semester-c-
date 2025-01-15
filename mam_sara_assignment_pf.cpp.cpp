// #include <iostream>
// using namespace std;

// int Max_consecutive(char array[], int size)
// {
//     int count = 1;
//     int max_consecutive = 1;

//     for (int i = 1; i < size; i++)
//     {
//         if (array[i] == array[i - 1])
//         {
//             count++;
//         }
//         else
//         {
//             max_consecutive = max(max_consecutive, count);
//             count = 1;
//         }
//     }

//     return max_consecutive;
// }

// int main()
// {
//     int size = 10;
//     char array[size] = "ABABBBBBAA"; // output =5 , a sequence of 5 consecutive B's
//     cout << Max_consecutive(array, size) << endl;
//     return 0;
// }

///////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int Max_consecutive(char array[], int size)
// {
//     int count = 1;
//     int max_consecutive = 1;

//     for (int i = 1; i < size; i++)
//     {
//         if (array[i] == array[i - 1])
//         {
//             count++;
//         }
//         else
//         {
//             max_consecutive = max(max_consecutive, count);
//             count = 1;
//         }
//     }

//     max_consecutive = max(max_consecutive, count);

//     return max_consecutive;
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     char* array = new char[size + 1];

//     cout << "Enter the array elements (characters) one by one (e.g., ABABBBBBAA):" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Element " << i + 1 << ": ";
//         cin >> array[i];
//     }
//     array[size] = '\0';

//     cout << "Input Array: " << array << endl;
//     cout << "Maximum Consecutive Characters: " << Max_consecutive(array, size) << endl;

//     delete[] array;
//     return 0;
// }

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