#include <iostream>
using namespace std;

enum error
{
    success = 200,
    not_found = 404,
    server_error = 500
};

int main()
{
    error current_error = not_found;

    cout << "Error Code: " << current_error << endl;

    return 0;
}

