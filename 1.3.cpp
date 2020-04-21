//If a ball is thrown vertically upward with an initial velocity of 128 ft/sec, 
//the ball's height and velocity after 48 seconds is given below: 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "If a ball is thrown vertically upward with an initial velocity of 128 ft/sec, the ball's height and velocity after 48 seconds is given below: " << endl;

    double t = 48;
    double h = ((128*t) - (16*pow(t, 2)))/t;
    double v = (128 - (32*t))/t;

    cout << "Height: " << h << endl;
    cout << "Velocity" << v << endl;

}