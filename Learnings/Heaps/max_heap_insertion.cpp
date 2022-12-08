/**
 * @file max_heap_insertion.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-04
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Insertion in MaX Heap in C & Cpp. */

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

// void createHeap()
// {
//     int a[] = {0, 10, 20, 30, 25, 5, 40, 35};
//     int i;

//     for (i = 2; i <= 7; i++)
//     {
//         insert(a,i);
//     }
// }

int main()
{
    cout << "The Concepts of Insertion in MaX Heap Using C and Cpp" << endl;
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

    int heap[]={0,10,20,30,25,5,40,35};
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

    for (int i = 1; i <= 7; i++)
    {
        cout << "The element at the index " << i << " is : " << heap[i] << endl;
        // printing the elements of an heap array
    }

    return 0;
}

