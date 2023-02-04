#include <iostream>
using namespace std;

void adder (int num);

int main ()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    adder (num);

    return 0;
}

void adder (int num)
{
    int out;
    int sum;
    int temp;
    bool flag = false;

    while (sum > 9 || num!=0)
    {
        if (flag==true)
        {num = sum;}

        out = 0;
        sum = 0;

    while (num != 0)
    {
        out = num%10;
        num = num/10;
        sum = sum+out;
        flag = true;
    }
        cout << "Sum is : " << sum << endl;
    }
}
