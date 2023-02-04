#include <iostream>
using namespace std;

int main ()
{
   int num;
   int result = 1;

   cout << "Enter the number : ";
   cin >> num;

   for (int x = 1; x<=num; x++)
   {
      result = result*x;
   }

   cout << "The factorial is : " << result;

   return 0;
}


