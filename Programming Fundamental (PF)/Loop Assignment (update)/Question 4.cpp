#include <iostream>
using namespace std;

int main ()
{
   int num;
   int x;

   cout << "Enter your number : ";
   cin >> num;
   cout << "Factors are : " << endl;

    for (x=1; x<=num; x++)
   {
       while (num%x==0)
       {
           cout << x << endl;
           x++;
       }
   }



   return 0;
}


