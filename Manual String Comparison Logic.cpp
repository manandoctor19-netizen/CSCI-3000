#include <iostream>
using namespace std;

int main()
{
    char first_word[20];
    char second_word[20];

    cout << "Enter first word: ";
    cin >> first_word;

    cout << "Enter second word: ";
    cin >> second_word;

    int index = 0;
    int result = 0;

    while (first_word[index] != '\0' && second_word[index] != '\0')
    {
        if (first_word[index] != second_word[index])
        {
            result = first_word[index] - second_word[index];
            break;
        }
        index++;
    }

    if (result == 0)
    {
        result = first_word[index] - second_word[index];
    }

    if (result == 0)
        cout << "Both strings are equal\n";
    else if (result < 0)
        cout << "First string is smaller\n";
    else
        cout << "First string is greater\n";

    return 0;
}


