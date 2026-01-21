#include <iostream>
using namespace std;

void count_pass(int marks[], int size);

int main()
{
    const int size = 5;
    int numbers[size] = { 35,78,40,22,90 };

    count_pass(numbers , size);

    return 0;
}

void count_pass(int marks[], int size)
{
    int pass_count = 0;

    for (int index = 0; index < size; index++)
    {
        if (marks[index] >= 40)
        {
            pass_count++;
        }
    }
    cout << "Passed students: " << pass_count << endl;
}


