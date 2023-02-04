#include <iostream>
using namespace std;

int main ()
{
   int limit;
   int num;
   int sum;

   cout << "Enter the limit of sum : ";
   cin >> limit;

   for (int x = 1; x<=limit; x++)
   {
      num = sum + x;
      sum = num;
   }

   cout << "Sum of integers from 1 to " << limit << " is : " << sum << endl;

   return 0;
}


