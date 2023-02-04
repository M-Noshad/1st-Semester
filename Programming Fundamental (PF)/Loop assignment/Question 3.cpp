#include <iostream>
using namespace std;

int main ()
{ int n1,n2,a,b,c;
    cout<<"Enter the First Number ; ";
    cin>>n1;
    cout<<"Enter the Second : ";
    cin>>n2;
    if(n1>=n2)
    {
        n1=a;
        n2=b;
        if(n1%n2==0)
        {
            cout<<"Greatest Common Divisor : "<<n2;
        }
        else if(n1%n2!=0)
        {c=n1%n2;
        n2=a;
            while(c!=0)
          {
            c=b;
           c=a%b;
           b=a;
           }
           cout<<"GCD is "<<c;
    }
    }
    return 0;
}


