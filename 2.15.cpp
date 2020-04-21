//Find highest odd number and total odd numbers

#include <iostream>
using namespace std;

int main()
{
    int no = 0;
    int oddMax = 0;
    int oddTotal = 0;

    while (no >= 0)
    {
        cout << "Enter a number: ";
        cin >> no;

        if (no % 2 != 0 && no >= 0)
        {
            if (no > oddMax)
            {
                oddMax = no;
            }
            oddTotal++;
        }
    }
    cout << "Maximum odd numnber: " << oddMax << endl;
    cout << "Total odd numnbers: " << oddTotal << endl;
}