//Pay calulator with overtime

#include <iostream>
#include <cmath>
using namespace std;

double payCalulator(double hrsWorked, double hrlypay, double overtimePay)
{
    double pay;
    if (hrsWorked < 40 && hrsWorked > 0)
    {
        pay = hrsWorked * hrlypay;
    }
    else if (hrsWorked > 40)
    {
        pay = (hrlypay * 40) + ((hrsWorked - 40) * overtimePay);
    }

    return pay;
}

int main()
{
    double hrsWorked, hrlypay, overtimePay, pay, overtimeRate;

    cout << "No. of hours worked this week: ";
    cin >> hrsWorked;
    cout << "Hourly pay: $";
    cin >> hrlypay;
    cout << "Overtime (x times original pay): ";
    cin >> overtimeRate;

    overtimePay = hrlypay * overtimeRate;

    pay = payCalulator(hrsWorked, hrlypay, overtimePay);

    cout << "Pay: $" << pay << endl;
}