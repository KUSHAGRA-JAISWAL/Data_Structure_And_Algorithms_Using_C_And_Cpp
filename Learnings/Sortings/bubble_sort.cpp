/**
 * @file bubble_sort.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-08
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts Bubble sort in C & Cpp. */

#include <iostream>
using namespace std;
// header files

/*** Bubble Sort ***/

/*
Bubble sort arrange N number of array elements by placing the biggest element on proper position.
It always arrange data in decending order.
*/

void bubbleSort(int a[], int n)
// function defination and deceleration
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    // using for loop
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            ;
        break;
    }
}

int main()
{
    cout << "The Concepts of Bubble sort Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    int x;
    // declearing a variable

    cout << "enter the size of the array : ";
    // taking input from the user

    cin >> x;
    // storing user input in variable x

    cout << endl;

    int arr[x];
    // declearing an array size of x

    for (int i = 0; i < x; i++)
    // using for loop
    {
        cin >> arr[i];
        // storing user input in array
    }

    cout << endl;

    cout << "Before performing the bubble sort the array is ..." << endl
         << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " At index " << i << " The element is : " << arr[i] << endl;
    }

    cout << endl;

    cout << "After performing bubble sort " << endl;

    int z = x;
    int len = x;

    while (z != 1)
    {
        int p = z - 1;
        int pars = len - p;
        bubbleSort(arr, z);
        z--;

        cout << endl;

        cout << " At pars " << pars << "...." << endl;
        cout << "---------------------------------" << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "| At index " << i << " The element is : " << arr[i] << " | " << endl;
        }
        cout << "---------------------------------" << endl;
    }
}

/*

                ***** Bubble sort working ******

                    arr[] = {8,5,7,3,2}

                    at pars 1:

                      8 |  5    5    5    5
                      5 |  8 |  7    7    7
                      7    7 |  8 |  3    3
                      3    3    3 |  8 |  2
                      2    2    2    2 |  8

                -> here we get the largest element at the last by comparing and swaping elements
                    one by one in pars 1.

                    Total comarison : 4
                    Total swap      : 4
                    Total largest element at the end : 1

                    at pars 2:

                      5 |  5    5    5
                      7 |  7 |  3    3
                      3    3 |  7 |  2
                      2    2    2 |  7
                      8    8    8    8

                    Total comarison : 3
                    Total swap      : 3
                    Total largest element at the end : 2

                    at pars 3:

                      5 |  3    3
                      3 |  5 |  2
                      2    2 |  5
                      7    7    7
                      8    8    8

                    Total comarison : 2
                    Total swap      : 2
                    Total largest element at the end : 3

                    at pars 4:

                      3 |  2
                      2 |  3
                      5    5
                      7    7
                      8    8

                    Total comarison : 1
                    Total swap      : 1
                    Total largest element at the end : 1

                -> The array is sorted.
*/