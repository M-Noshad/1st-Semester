#include <iostream>
using namespace std;

int main ()
{
    int num1;
    int num2;
    int res;
    int result;

    cout << "Enter your number : ";
    cin >> num1;
    num2 = num1;

    while (num1!=0)
    {
        res = num1%10;
        num1 = num1/10;
        result = result*10+res;
    }

    if (num2==result)
    {
        cout << "It is palindromic";
    }
    else
    {
        cout << "It is not palindromic";
    }

    return 0;
}


