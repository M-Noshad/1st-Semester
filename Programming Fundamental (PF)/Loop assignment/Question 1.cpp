#include <iostream>
using namespace std;

int main ()
{
    int num;
    int limit;
    int result;

    cout << "Enter the number : ";
    cin >> num;

    cout << "Enter the limit : ";
    cin >> limit;

    for (int x = 1; x <= limit; x++)
    {
        result = num*x;
        cout << num << " * " << x << " = " << result << endl;
    }

    return 0;
}


