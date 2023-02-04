#include <iostream>
using namespace std;
void prime_nums(int limit);

int main ()
{
    int limit;

    cout << "Enter the limit : ";
    cin >> limit;

    prime_nums(limit);

    return 0;
}

void prime_nums(int limit)
{
    int count;

    cout << "Prime numbers upto " << limit << " are : " << endl;

    for (int x=1; x<=limit; x++)
    {
        count = 0;

        for (int y=1; y<=x; y++)
        {
            if (x%y==0)
            count ++;
        }

        if (count == 2)
        cout << x << endl;
    }
}
