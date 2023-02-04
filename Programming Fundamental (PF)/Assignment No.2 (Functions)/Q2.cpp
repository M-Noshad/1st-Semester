/*#include<iostream>
using namespace std;
void powerful_num(int num);

int main ()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    powerful_num(num);

    return 0;
}

void powerful_num(int num)
{
    int count = 0;
    int num1;
    int num2;
    int out;
    int pow = 1;
    int sum = 0;

    num1 = num;
    num2 = num;

    while (num != 0)
    {
        num = num/10;
        count ++;
    }

    while (num1 != 0)
    {
        out = num1%10;
        num1 = num1/10;

        for (int x = 1; x<=count; x++)
        {
            pow = pow*out;
        }

        sum = sum+pow;

        pow = 1;
    }

    if (sum == num2)
    {
        cout << "It is powerful number";
    }
    else
    {
        cout << "It is not powerful number";
    }

}*/

#include <iostream>
using namespace std;
int power (int value,int out);
void powerful (int num);

int main ()
{
    int num;

    cin >> num;

    powerful(num);

    return 0;

}

int power (int value,int out)
{

    int count = 0;

    while (value!=0)
    {
        value=value/10;
        count ++;
    }

    int power = 1;

    for (int x=1; x<=count; x++)
    {
       power=power*out;
    }

    return power;
}

void powerful (int num)
{
    int pow;
    int value;
    value = num;
    int out,sum =0;
    while (num!=0)
    {
        out = num%10;
        num = num/10;
        pow = power (value,out);
        sum = sum + pow;
    }
    cout << sum;
    if (value == sum)
    {
        cout << "powerful";
    }

}
