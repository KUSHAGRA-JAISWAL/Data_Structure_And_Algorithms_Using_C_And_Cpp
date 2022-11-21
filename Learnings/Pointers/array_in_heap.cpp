/**
 * @file array_in_heap.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-11-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Creating Array in Heap in C & Cpp. */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
// header files

int main()
{
    cout << "The Concepts of Creating Array in Heap Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    int *p;
    int *q;
    // declearing pointer

    p = (int *)malloc(5 * sizeof(int));
    // by using pointer and malloc function we can assign array in heap memory in C programming.

    p[0] = 12;
    p[1] = 13;
    p[2] = 16;
    p[3] = 25;
    p[4] = 100;
    // assingning values to the array pointer which is created in heap.

    cout << "printing element of array stored in heap using malloc function." << endl
         << endl;
    // message in terminal

    for (int i = 0; i < 5; i++)
    // using for loop to print the elements of array
    // for loop first initalize then test and then increment.
    {
        cout << "The element at the index " << i << " is : " << p[i] << endl
             << endl;
        // printing element of array using pointer.
    }

    q = new int[5];
    // by using pointer and new  we can assign array in heap memory in C++, works same as malloc.

    q[0] = 18;
    q[1] = 19;
    q[2] = 15;
    q[3] = 29;
    q[4] = 156;
    // assingning values to the array pointer which is created in heap.

    cout << "printing element of array stored in heap using new." << endl
         << endl;
    // message in terminal

    for (int i = 0; i < 5; i++)
    // using for loop to print the elements of array
    // for loop first initalize then test and then increment.
    {
        cout << "The element at the index " << i << " is : " << q[i] << endl
             << endl;
        // printing element of array using pointer.
    }

    free(p);
    // free is use to free the memory in heap (for C language).

    delete [ ]q;
    // delete is use to release the memory in heap (for C++ language).
    
    return 0;
}