#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double getRadius(double x1, double x2, double y1, double y2)
{
    double rad = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return rad;
}

double getArea(double rad, double pi)
{
    double area = pi * pow(rad, 2);
    return area;
}

double getCircumference(double rad, double pi)
{
    double circumference = 2 * pi * rad;
    return circumference;
}

int main()
{
    double x1, x2, y1, y2, rad, area, circumference;

    double pi = 3.1416;

    cout << "Enter coordinates of ther circle center(x1, y1): ";
    cin >> x1 >> y1;
    cout << "\nEnter coordinates of a point on the circle (x2 , y2): ";
    cin >> x2 >> y2;

    rad = getRadius(x1, x2, y1, y2);
    area = getArea(rad, pi);
    circumference = getCircumference(rad, pi);

    cout << "Radius of the circle: " << rad << '\n';
    cout << "Area of the circle: " << area << '\n';
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}