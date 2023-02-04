#include <iostream>
using namespace std;

void menu ();
float add (float num1, float num2);
float multiply (float num1, float num2);
float divide (float num1, float num2);
float subtract (float num1, float num2);
int quit();

int main ()
{
    menu ();
}

void menu ()
{
    float num1;
    float num2;
    float choice;

    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Enter 1 for Addition" << endl;
    cout << "Enter 2 for Multiplication" << endl;
    cout << "Enter 3 for Subtraction" << endl;
    cout << "Enter 4 for Division" << endl;
    cout << "Enter 5 for Quitting" << endl;
    cout << "Enter : ";
    cin >> choice;

    if (choice == 1)
    add (num1,num2);
    else if (choice == 2)
    multiply (num1,num2);
    else if (choice == 3)
    subtract (num1,num2);
    else if (choice == 4)
    divide (num1,num2);
    else if (choice == 5)
    quit ();
}

float add (float num1, float num2)
{
    cout << num1+num2;
}

float multiply (float num1, float num2)
{
    cout << num1*num2;
}

float subtract (float num1, float num2)
{
    cout << num1-num2;
}

float divide (float num1, float num2)
{
    cout << num1/num2;
}

int quit ()
{
    return 0;
}
