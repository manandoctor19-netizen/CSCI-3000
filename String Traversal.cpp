#include <iostream>
using namespace std;

int main()
{
    char user_name[50];

    cout << "Enter your name: ";
    cin.getline(user_name, 50);

    cout << "\nCharters in the name: \n";

    for (int index = 0; user_name[index] != '\0'; index++)
    {
        cout << user_name[index] << endl;
    }
    return 0;
}


