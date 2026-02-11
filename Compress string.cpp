#include <iostream>
using namespace std;

int main()
{
    char input_word[200];
    cin >> input_word;

    for (int character_index = 0; input_word[character_index] != '\0';)
    {
        char current_character = input_word[character_index];
        int reapeat_count = 0;

        while (input_word[character_index] == current_character)
        {
            reapeat_count++;
            character_index++;
        }

        cout << current_character << reapeat_count;
    }

    cout << endl;
    return 0;
}


