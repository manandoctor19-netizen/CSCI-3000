#include <iostream>
using namespace std;

int main()
{
	char source[50];
	char destination[50];
	int index = 0;

	cout << "Enter a name: ";
	cin.getline(source, 50);

	while (source[index] != '\0')
	{
		destination[index] = source[index];
		index++;
	}

	destination[index] = '\0';
	cout << "copied string: " << destination << endl;
	return 0;
}


