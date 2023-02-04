#include <iostream>
using namespace std;

int main ()
{
    double array_num [30];
    int count = 0;

    for (int x=0; x<10; x++)
    {
        array_num [x] = x*x;
    }

    for (int x=10; x<20; x++)
    {
        array_num [x] = x*5;
    }

    for (int x=20; x<30; x++)
    {
        array_num [x] = x*x*x;
    }

    for (int x=0; x<30; x++)
    {
        count ++;
        cout << array_num[x] << "\t";
        if (count == 5)
        {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}
