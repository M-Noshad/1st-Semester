#include <iostream>
using namespace std;

int main ()
{
    int array_1 [7] = {10,15,10,20,30,35,40};
    int array_2 [7] = {1,5,30,40,30,7,8};
    int res_array [7];
    int choice;
    int count_inter = 0;
    int count_union_1 = 0;
    int count_union_2 = 0;

    /*cout << "Enter values for array 1 : " << endl;
    for (int x=0; x<7; x++)
    {
        cin >> array_1 [x];
    }

    cout << "Enter values for array 2 : " << endl;
    for (int x=0; x<7; x++)
    {
        cin >> array_2 [x];
    }*/

    cout << "Press '1' for Sum of Arrays" << endl;
    cout << "Press '2' for Difference of Arrays" << endl;
    cout << "Press '3' for Intersection of Arrays" << endl;
    cout << "Press '4' for Union of Arrays" << endl;
    cout << "Press '5' for Quiting" << endl;
    cout << "Enter : ";
    cin >> choice;

    switch (choice)
    {
    case 1 :
        for (int x=0; x<7; x++)
        {
            res_array [x] = array_1 [x] + array_2 [x];
        }

        cout << "Sum of two arrays is : " << endl;
        for (int x=0; x<7; x++)
        {
            cout << res_array [x] << "\t";
        }
        break;

    case 2 :
        for (int x=0; x<7; x++)
        {
            res_array [x] = array_1 [x] - array_2 [x];
        }

        cout << "Difference of two arrays is : " << endl;
        for (int x=0; x<7; x++)
        {
            cout << res_array [x] << "\t";
        }
        break;

    case 3 :
        for (int y=0; y<7; y++)
        {
            for (int x=0; x<7; x++)
            {
                if (array_1 [y] == array_2 [x])
                {
                    res_array [count_inter] = array_1 [y];
                    count_inter++;
                    break;
                }
            }
        }

        cout << "The intersection of two arrays is : " << endl;
        for (int x=0; x<count_inter; x++)
        {
            cout << res_array [x] << "\t";
        }
        break;

    case 4 :
        for (int x=0; x<7; x++)
        {
            res_array [x] = array_1 [x];
            count_union_1++;
        }

        for (int x=0,y=7; x<7; x++,y++)
        {
            res_array [y] = array_2 [x];
            count_union_1++;
        }

        for (int x=0; x<count_union_1; x++)
        {
            cout << res_array [x] << "\t";
        }

        for (int x=0; x<count_union_1; x++)
        {
            for (int y=0; y<count_union_1; y++)
            {
                if (res_array [x] == res_array [y])
                {
                    for (int a=y; a<count_union_1; a++)
                    {
                        res_array [a] = res_array [a+1];
                    }
                }
            }
        }

        cout << endl << "result : " << endl;
        for (int x=0; x<count_union_1; x++)
        {
            cout << res_array [x] << "\t";
        }
    }

    return 0;
}
