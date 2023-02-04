#include <iostream>
using namespace std;

int main ()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    if (num%2==1 && num%3==2)
    {
        cout << "The number is a prime number";
    }
    else
    {
        if(num==2 || num==3)
        cout<<"The number is a prime number";
        else
        cout << "The number is not a prime number";
    }



    return 0;
}


