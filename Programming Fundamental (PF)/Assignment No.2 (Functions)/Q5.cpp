#include <iostream>
using namespace std;

int input_validation (int num1, int num2, int limit);
void sequence(int num1, int num2, int limit);
int main ()
{
    int out;
    out = input_validation (0,0,0);

    if (out==0)
    return 0;
}

int input_validation (int num1, int num2, int limit)
{
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter the limit of iteration : ";
    cin >> limit;

    if (limit>=3)
    sequence (num1, num2, limit);
    else
    return 0;

}

void sequence (int num1, int num2, int limit)
{
    int a,b,c;
    int count = 1;

    a = num1;
    b = num2;

    cout << "Sequence is : " << endl;
    cout << a << endl;
    cout << b << endl;

    for (int x=2; x<=limit; x++)
    {
        count ++;

        if (count%2==0)
        {c = a+b;
        cout << c << endl;
        a = b;
        b = c;}

        if (count%2!=0)
        {c = a*b;
        cout << c << endl;
        a = b;
        b = c;}
    }
}
