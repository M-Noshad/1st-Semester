#include<iostream>
using namespace std;
int main()

{
    int num;
    int output = 1;

    cout << "Enter the number : ";
    cin >> num;

    for (int x=1 ; x<=num ; x++)
    {
        output = x*output;
    }

    cout << "Factorial is : " << output;

    return 0;
}
