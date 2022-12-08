/**
 * @file max_heap_deletion.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-07
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Deletion in MaX Heap in C & Cpp. */

#include <iostream>
using namespace std;
// header files

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
    cout << "The Concepts of Deletion in MaX Heap Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    /**** M A X Heap *****/

    /*
    Every node should have an element greater than or equal to all it's decendence. {duplicates are also
    allowed} If this condition satisfy it is called M A X Heap.

                                    30
                                  /   \
                                /      \
                              20        15
                             /  \      /  \
                           /     \   /     \
                          5      10 12      6

            int heap[10] = {30,20,15,5,10,12, 6,  ,  ,  };
                 index   =  1  2  3  4  5  6 7  8  9  10
    */

    int heap[] = {0,40,25,35,10,5,20,30};
    // declearing a heap array of size n.

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
