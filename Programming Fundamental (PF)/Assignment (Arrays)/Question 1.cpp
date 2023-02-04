#include <iostream>
#include <time.h>
using namespace std;

int main ()
{
    int array_num [10];
    int choice;
    srand (time(0));
    //Occurence
    int num;
    int slot;
    bool occur_flag = false;
    //Deletion
    int num_del;
    int index_del;
    bool flag = false;
    bool del_flag = false;
    bool index_flag = false;
    int count_del = 0;
    //Max & Min
    int max;
    int min;
    int max_slot;
    int min_slot;
    bool max_flag = false;
    bool min_flag = false;
    //add
    int add_num;
    int count_add = 0;
    int count_add_del;

    for (int x=0; x<10; x++)
    {
        array_num [x] = rand()%98+2;
    }

    for (int x=0; x<10; x++)
    {
        cout << array_num [x] << endl;
    }


    do
    {
        cout << endl;
        cout << "Press '1' to find the last occurrence of a number." << endl;
        cout << "Press '2' to delete a number from the array." << endl;
        cout << "Press '3' to find Min and Max number and also their position." << endl;
        cout << "Press '4' to print the current contents of the array." << endl;
        cout << "Press '5' to add a number to the array." << endl;
        cout << "Press '6' to quit" << endl;
        cout << "Enter : ";
        cin >> choice;

        switch(choice)
    {
    case 1 :
        cout << endl;
        cout << "Enter the number you want to find the last occurrence of : " << endl;
        cin >> num;

        for (int x=0; x<10; x++)
        {
            if (array_num[x]==num)
            {
                occur_flag = true;
                slot = x;
            }
        }

        if (occur_flag == true)
        cout << num << " was found at slot #" << slot << endl;
        else
        cout << num << " was not found" << endl;

        occur_flag = false;
        break;

    case 2 :
        cout << endl;
        del_flag = true;

        cout << "Enter the number you want to delete : ";
        cin >> num_del;

        for (int x=0; x<10; x++)
        {
            if (array_num [x] == num_del)
            {
                index_flag = true;
                index_del = x;
                break;
            }
        }

        for (int x=index_del; x<10 && index_flag == true; x++)
        {
            array_num[x] = array_num[x+1];
        }

        if (index_flag == true)
        {
            count_del++;
            cout << "Number deleted successfully!" << endl;
        }
        else
        {
            cout << "Number not found" << endl;
        }

        index_flag = false;
        count_add_del = count_del;

        break;

    case 3 :
        cout << endl;
        for (int x=0; x<10-count_del+count_add; x++)
        {
            if (array_num [x] > max || max_flag == false)
            {
                max = array_num [x];
                max_slot = x;
                max_flag = true;
            }

            if (array_num [x] < min || min_flag == false)
            {
                min = array_num [x];
                min_slot = x;
                min_flag = true;
            }
        }

        cout << "Minimum number is : " << min  << " at slot #" << min_slot << endl;
        cout << "Maximum number is : " << max << " at slot #" << max_slot << endl;

        max_flag = false;
        min_flag = false;

        break;

    case 4 :
        cout << endl;
        cout << "Current array is : " << endl;

        cout << "Slot# : ";
        for (int x=0; x<10-count_del+count_add; x++)
        {
            cout << x << "\t";
        }

        cout << endl;
        cout << "Value : ";
        for (int x=0; x<10-count_del+count_add; x++)
        {
            cout << array_num[x] << "\t";
        }

        cout << endl;

        break;

    case 5 :
        cout << endl;
        if (count_add_del == 0)
        {
            cout << "No space for adding more numbers!" <<endl;
        }
        else
        {
            cout << "Enter the number you want to add : " <<endl;
            cin >> add_num;

            for (int x=10-count_add_del; ;)
            {
                count_add++;
                count_add_del--;
                array_num [x] = add_num;
                break;
            }
            cout << "Number added successfully!" << endl;
        }

        break;

    case 6 :
        break;

    default :
        cout << endl;
        cout << "Invalid input!";
        break;
    }
    } while (choice != 6);

    return 0;
}
