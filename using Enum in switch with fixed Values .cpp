#include <iostream>
using namespace std;

enum TrafficLight
{
    Red,
    Yellow,
    Green
};

int main()
{
    TrafficLight signal = Green;

    switch (signal)
    {
    case Red:
        cout << "STOP";
        break;

    case Yellow:
        cout << "GET READY";
        break;

    case Green:
        cout << "GO";
        break;
    }

    return 0;
}
