/**
 * @file insertion_sort.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-09
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts Insertion sort in C & Cpp. */

#include <iostream>
using namespace std;
// header files

/*** Insertion Sort ***/

/*
Insertion sort arrange N number of array elements by incerting particular item in particular place
such a way that items ate i sorted order.
*/

void insertionSort(int a[], int n)
// function defination and deceleration
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = a[i];

        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int main()
{
    cout << "The Concepts of Insertion sort Using C and Cpp" << endl;
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

    cout << "Before performing the insertion sort the array is ..." << endl
         << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " At index " << i << " The element is : " << arr[i] << endl;
    }

    cout << endl;

    cout << "After performing insertion sort " << endl;

    insertionSort(arr, x);

    for (int i = 0; i < x; i++)
    {
        cout << " At index " << i << " The element is : " << arr[i] << endl;
    }

    return 0;
}

/*

                ***** Insertion sort working ******

                    arr[] = {8,5,7,3,2}

                    arr[] = {8,| 5,7,3,2}

                -> suppose we have single element in the array like in this case we have 8, now
                    we will insert next element as show in pars 1.

                    at pars 1:

                    8 5 | 7 3 2
                    ---

                    Total comarison : 1
                    Total swap      : 1

                -> Now compare the inserted element with the element which is present in an array
                    if inserted element will be smaller then the present element in array we will
                    perform swap between them and adjust according to it.

                    at pars 2:

                    5 8 7 | 3 2
                      ---  
                    5 7 8 | 3 2
                    ---

                    Total comarison : 2
                    Total swap      : 2

                    at pars 3:

                    5 7 8 3 | 2
                        ---
                    5 7 3 8 | 2
                      ---
                    5 3 7 8 | 2
                    ---
                    3 5 7 8 | 2

                    Total comarison : 3
                    Total swap      : 3

                    at pars 4:

                    3 5 7 8 2 |
                          ---
                    3 5 7 2 8 |
        `               ---
                    3 5 2 7 8 |
                      ---
                    3 2 5 7 8 |
                    ---
                    2 3 5 7 8 |

                    Total comarison : 4
                    Total swap      : 4

                -> The array is sorted.
*/