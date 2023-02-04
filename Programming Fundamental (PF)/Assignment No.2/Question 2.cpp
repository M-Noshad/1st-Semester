#include <iostream>
using namespace std;
bool AllPowerfulNum (int num);
int main ()
{
   int num;
   int unit;

   cout << "Enter your number : ";
   cin >> num;

   while (num!=0)
   {
       unit = num%10;
       num = num/10;
   }

   cout << num << unit;



   return 0;
}

/*bool AllPowerfulNum (int num)
{
    int unit;

    while (num!=0)
    {
        unit = num%10;
        num = num/10;
        cout << num;
    }

    return true;/
}*/

