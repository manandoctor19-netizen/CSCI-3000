#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char user_name[50];
    int length = 0;

    cout << "Enter your name: ";
    cin.getline(user_name, 50);

    while (user_name[length] != '\0')
    {
        length++;
    }

    cout << "Length of the name: " << length << endl;

    return 0;
}


