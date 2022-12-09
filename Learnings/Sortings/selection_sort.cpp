/**
 * @file selection_sort.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-09
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts Selection sort in C & Cpp. */

#include <iostream>
using namespace std;
// header files

/*** Selection Sort ***/

/*
Selection sort arrange N number of array elements by placing the smallest element in prior position
in case of aescending order arrangement.
*/

void SelectionSort(int a[], int n)
// function defination and deceleration
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
                k = j;
        }
        swap(a[i], a[k]);
    }
}

int main()
{
    cout << "The Concepts of Selection sort Using C and Cpp" << endl;
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

    cout << "Before performing the Selection sort the array is ..." << endl
         << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " At index " << i << " The element is : " << arr[i] << endl;
    }

    cout << endl;

    cout << "After performing Selection sort " << endl;

    SelectionSort(arr, x);

    for (int i = 0; i < x; i++)
    {
        cout << " At index " << i << " The element is : " << arr[i] << endl;
    }

    return 0;
}

/*

                ***** Selection sort working ******

                    arr[] = {8,6,3,2,5,4}

                    at pars 1:

                    8 <-i --    2
                    6      |    6
                    3      |    3
                 k->2------     8
                    5           5
                    4           4
                 j->end

                    Total comarison : 5
                    Total swap      : 1

                -> in first pass we will point I on the first element and use two pointers k  and 
                   J which will point on the first element.

                -> now pointer ke will point on the first element and j will go to the next element
                 and check if it is a smaller than the element pointing k or not.

                -> If the element is smaller than K then K will point to the element where J is 
                   pointing and J will check the next element which is smaller than the element K

                -> J will check the entire list till it reaches at the end of the list.

                -> K will point at the element which J was pointing (the smallest one before)
                    reaching towards the end of the list.

                -> At the end of first pass we will get one element sorted which will be the smallest one.

                -> In the next of the passes i will point the next element and all steps will be repeated.



                    at pars :2

                    2           2
                    6 <-i --|   3
                k-> 3     --|   6
                    8           8
                    5           5
                    4           4
                 j->end

                    Total comarison : 4
                    Total swap      : 1

                -> In second pass we will get 2 elements sorted.

                    at pars : 3

                    2          2
                    3          3
                    6 <-i --   4
                    8      |   8
                    5      |   5
                k-> 4-------   6
                 j->end

                    Total comarison : 3
                    Total swap      : 1

                -> In 3rd pass we will get 3 elements sorted.

                     at pars : 4

                    2          2
                    3          3
                    4          4
                    8<- i --|  5
                k-> 5 ------|  8  
                    6          6
                 j->end

                    Total comarison : 2
                    Total swap      : 1

                -> In 4th pass we will get 4 elements sorted.

                      at pars : 5

                    2          2
                    3          3
                    4          4
                    5          5
                    8 <-i --|  6
                k-> 6 ------|  8
                 j->end

                    Total comarison : 1
                    Total swap      : 1   

                 -> In 5th pass we will get all elements sorted.                    

*/             
