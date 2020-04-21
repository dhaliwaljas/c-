//Convert seconds in x hours y mins z secs format

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int seconds, hours, minutes;
    cout << "seconds?: ";
    cin >> seconds;
    minutes = seconds / 60;
    hours = minutes / 60;
    cout << seconds << " seconds is equivalent to " << hours << " hours " << minutes % 60
         << " minutes " << seconds % 60 << " seconds." << endl;
}