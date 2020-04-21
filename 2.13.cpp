//seprate employees in age groups

#include <iostream>
using namespace std;

int main()
{
    int age, under30, thirty40, fortyone50, above51, total;
    age = under30 = thirty40 = fortyone50 = above51 = total = 0;

    while (age >= 0)
    {
        cout << "Enter employee age: ";
        cin >> age;
        if (age >= 0 && age < 30)
        {
            under30++;
            total++;
        }
        else if (age >= 30 && age <= 40)
        {
            thirty40++;
            total++;
        }
        else if (age >= 41 && age <= 50)
        {
            fortyone50++;
            total++;
        }
        else if (age >= 51)
        {
            above51++;
            total++;
        }
    }
    cout << "Age Groups Number of Employees: " << endl;
    cout << "Under 30: " << under30 << endl;
    cout << "30 - 40: " << thirty40 << endl;
    cout << "41 - 50: " << fortyone50 << endl;
    cout << "Above 51: " << above51 << endl;
    cout << "Total: " << total << endl;
}