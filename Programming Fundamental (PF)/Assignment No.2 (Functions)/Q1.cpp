#include <iostream>
using namespace std;

void menu ();
void triangle_1 (int height);
void triangle_2 (int height);
void triangle_3 (int height);
void triangle_4 (int height);
void triangle_5 (int height);

int main ()
{
    menu ();

    return 0;
}

void menu ()
{
    int choice;
    int height;

    cout << "Enter the height of triangle : ";
    cin >> height;
    cout << endl;

    cout << "Enter 1 for Right Sided Right Triangle" << endl;
    cout << "Enter 2 for Flipped Right Sided Right Triangle" << endl;
    cout << "Enter 3 for Pyramid" << endl;
    cout << "Enter 4 for Diamond" << endl;
    cout << "Enter 5 for Time Clock Shape" << endl;
    cout << "Enter : ";
    cin >> choice;
    cout << endl;

    if (choice==1)
    triangle_1 (height);
    else if (choice==2)
    triangle_2 (height);
    else if (choice==3)
    triangle_3 (height);
    else if (choice==4)
    triangle_4 (height);
    else if (choice==5)
    triangle_5 (height);
    else
    cout << "Invalid choice!";
}

void triangle_1 (int height)
{
    for (int x=1; x<=height; x++)
    {
        for (int s=x; s<=height; s++)
        {
            cout << " ";
        }
        for (int y=1; y<=x; y++)
        {
            cout << "*";
        }

        cout << endl;
    }

}

void triangle_2 (int height)
{
    for (int x=height; x>=1; x--)
    {
        for (int s=x; s<=height; s++)
        {
            cout << " ";
        }
        for (int y=1; y<=x; y++)
        {
            cout << "*";
        }

        cout << endl;
    }

}

void triangle_3 (int height)
{
    for (int x=1; x<=height; x++)
    {
        for (int s=height-x; s>0; s--)
        {
            cout << " ";
        }

        for (int y=1; y<=x; y++)
        {
            cout << "* ";
        }

        cout << endl;
    }

}

void triangle_4 (int height)
{
    if (height%2==0)
    {
        height = height/2;
        height = height+1;
    }
    else
    {
        height = height/2;
        height = height + 1;
    }

    int count = 0;

    for (int x=1; x<height; x++)
    {
        //count ++;

        //if (count==height)
        //break;

        for (int s=height-x; s>0; s--)
        {
            cout << " ";
        }
        for (int y=1; y<=x; y++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int x=height; x>=0; x--)
    {
        for (int s=height-x; s>0; s--)
        {
            cout << " ";
        }
        for (int y=1; y<=x; y++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void triangle_5 (int height)
{
    if (height%2==0)
    {
        height = height/2;
        height = height+1;
    }
    else
    {
        height = height/2;
        height = height + 1;
    }

    int count = 0;

    for (int x=height; x>1; x--)
    {
        //count ++;

        //if (count==height)
        //break;

        for (int s=height-x; s>0; s--)
        {
            cout << " ";
        }
        for (int y=1; y<=x; y++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int x=1; x<=height; x++)
    {
        for (int s=height-x; s>0; s--)
        {
            cout << " ";
        }
        for (int y=1; y<=x; y++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
