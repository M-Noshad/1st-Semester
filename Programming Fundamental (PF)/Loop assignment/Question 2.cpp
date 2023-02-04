#include <iostream>
using namespace std;

int main ()
{
    int base;
    int exp;
    int result;

    cout << "Enter the base : ";
    cin >> base;

    cout << "Enter the exponent : ";
    cin >> exp;

    result = 1;

    for (int x = 1; x <= exp; x++)
    {
        result = result*base;
    }

    cout << "Power is : " << result;

    return 0;
}


