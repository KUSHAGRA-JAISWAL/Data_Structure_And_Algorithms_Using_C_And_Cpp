/**
 * @file pointer_of_array.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-11-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Pointer of an Array in C & Cpp. */

#include <iostream>
using namespace std;
// header files

int main()
{
    cout << "The Concepts of Pointer of an Array Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    int A[5] = {1, 2, 3, 4, 5};
    // declearation and initialization of an array size 5

    int *p;
    // declearing a pointer

    p = A;
    // & is not required when we are giving array name to pointer because name of array A itself is the
    // starting address of an array.

    cout << "printing element of array using array name." << endl
         << endl;
    // message in terminal

    for (int i = 0; i < 5; i++)
    // using for loop to print the elements of array
    // for loop first initalize then test and then increment.
    {
        cout << "The element at the index " << i << " is : " << A[i] << endl
             << endl;
        // printing element of array using array name
    }

    cout << "printing element of array using pointer." << endl
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
    return 0;
}