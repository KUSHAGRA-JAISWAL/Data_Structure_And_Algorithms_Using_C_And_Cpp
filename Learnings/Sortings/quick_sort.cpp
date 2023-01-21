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

int partition(int a[],int l, int h){
    int pivot = a[l];
    int i=l, j=h;

    do{
        do(i++); while(a[i]<=pivot);
        do(j--); while(a[j]>pivot);

        if(i<j) swap(a[i],a[j]);
    } while(i<j);

    swap(a[l],a[j]);
    return j;
}
void QuickSort(int a[], int n)
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

     
