#include <iostream>
using namespace std;

int main ()
{
   int limit;
   int num;

   cout << "Enter the limit of even numbers : ";
   cin >> limit;
   cout << "The numbers are : " << endl;

   for (int x = 1; x<=(limit/2); x++)
   {   num = num + 2;
       cout << num << endl;
   }

   return 0;
}


