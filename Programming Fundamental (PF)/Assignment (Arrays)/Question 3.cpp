#include <iostream>
using namespace std;

int main ()
{
    int array_sold_cars [10];
    int best_salesman;
    int sum = 0;
    int max;
    bool max_flag = false;

    for (int x=0; x<10; x++)
    {
        cin >> array_sold_cars [x];
    }

    for (int x=0; x<10; x++)
    {
        sum = sum + array_sold_cars[x];
    }

    for (int x=0; x<10; x++)
    {
        if (array_sold_cars [x] > max || max_flag == false)
        {
            max = x;
            max_flag = true;
        }
    }
    best_salesman = max+1;

    cout << "Total cars sold : " << sum << endl;
    cout << "Most cars sold by salesman #" << best_salesman;

    return 0;
}
