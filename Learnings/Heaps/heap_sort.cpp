/**
 * @file heap_sort.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-07
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts Heap sort in C & Cpp. */

#include <iostream>
using namespace std;
// header files

void insert(int a[], int n)
// defination and declearation of a function
{
    int temp, i = n;
    // declearing variable and storing value of n in it

    temp = a[n];

    while (i > 1 && temp > a[i / 2])
    // using while loop
    {
        a[i] = a[i / 2];
        i = i / 2;
    }
    a[i] = temp;
}

int deletion(int a[], int n)
// defination and declearation of a function
{
    int i, j, x, val, temp;
    // declearing variables

    x = a[n];
    val = a[1];
    a[1] = a[n];
    a[n] = val;

    i = 1;
    j = i * 2;

    while (j < n - 1)
    // using while loop
    {
        if (a[j + 1] > a[j])
            j = j + 1;

        if (a[i] < a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2 * i;
        }
        else
            break;
    }
    return val;
}

int main()
{
    cout << "The Concepts of Heap sort Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    int heap[] = {0, 10, 20, 30, 25, 5, 40, 35};
    // output {0,40,25,35,10,5,20,30}
    // declearing a heap array of size n.

    for (int i = 2; i <= 7; i++)
    // using for loop
    {
        // cout << "Enter the element for the index " << i << " : ";
        // taking user input

        insert(heap, i);
        // storing user input
    }

    for (int i = 7; i > 1; i--)
    {
        cout << "Deleted Value from heap is : " << deletion(heap, i) << endl;
    }
    
    for (int i = 1; i <= 7; i++)
    {
        cout << "The element at the index " << i << " is : " << heap[i] << endl;
        // printing the elements of an heap array
    }

    return 0;
}
