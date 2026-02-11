#include <iostream>
using namespace std;

int main()
{
    char input_text[300];

    cout << "Enter a string: ";
    cin.getline(input_text, 300);

    bool visited[256] = { false };

    int start_index = 0;
    int end_index = 0;
    int max_length = 0;

    while (input_text[end_index] != '\0')
    {
        char current_char = input_text[end_index];

        while (visited[current_char] == true)
        {
            char left_char = input_text[start_index];
            visited[left_char] = false;
            start_index++;
        }

        visited[current_char] = true;

        int current_length = end_index - start_index + 1;
        if (current_length > max_length)
        {
            max_length = current_length;
        }
        end_index++;
    }

    cout << "Longest length without reapeating characters = " << max_length << endl;
    return 0;
}


