#include <iostream>
using namespace std;

int main ()
{
   int num;
   int square;

   cout << "Enter your number : ";
   cin >> num;

   for (int x = 0; x<=num; x++)
   {
       square = x*x;
       cout << "Square of " << x << " is " << square << endl;
   }

   return 0;
}


