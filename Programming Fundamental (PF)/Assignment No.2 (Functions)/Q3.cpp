#include<iostream>
using namespace std;
void powerful_num();

int main ()
{
    powerful_num();

    return 0;
}

void powerful_num()
{
    int num,out,sum=0,temp;

    cout << "All the 3-Digit powerful numbers are : " << endl;
    for (int x=100; x<=999; x++)
    {
        sum = 0;

        temp = x;

        while (x != 0)
        {
            out = x%10;
            x = x/10;
            sum = sum + (out*out*out);
        }

        if (sum == temp)
        cout << temp << endl;

        x = temp;
    }
}
