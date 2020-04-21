//Calculating sum, average and sum of squares from two integers

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b = 0;

    cout << "Enter a integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    int sum = a + b;
    int avg = ((a + b) / 2);
    int sqSum = (pow(a, 2) + pow(b, 2));

    cout << "Sum of " << a << " & " << b << " : " << sum << endl;
    cout << "Average of " << a << " & " << b << " : " << avg << endl;
    cout << "Sum of squareroots's of " << a << " & " << b << " : " << sqSum << endl;
}