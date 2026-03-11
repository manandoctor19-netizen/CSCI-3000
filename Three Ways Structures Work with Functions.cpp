#include <iostream>
using namespace std;

struct student_record
{
    int roll_number;
    int marks;
};

void change_marks(student_record student_copy);

int main()
{
    student_record student_main;

    student_main.roll_number = 1;
    student_main.marks = 90;

    cout << "Before function call: " << student_main.marks << endl;

    cout << "Address inside main: " << &student_main << endl;

    change_marks(student_main);

    cout << "After function call: " << student_main.marks << endl;

    return 0;
}

void change_marks(student_record student_copy)
{
    student_copy.marks = 50;

    cout << "Inside function (copy): " << student_copy.marks << endl;

    cout << "Address inside function: " << &student_copy << endl;
}


