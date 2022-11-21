/**
 * @file arrays_basics.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-11-11
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Arrays in C & Cpp. */

#include <iostream>
using namespace std;
// header files

int main()
{
    cout << "The Concepts of Arrays Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    /*********  Arrays  ***********/

    /*
    An Array is a collection of similar elements
    one variable => capabale of storing multiple values
    Syntax
    The syntax of declearing an array looks like
    int marks[90]        => integer array
    char name[20]        => character array or string
    float percentile[90] => float array
    It is very important to note that array index start from zero 0.
    */

    int A[5];
    // this is array decleration, it will declear the array of size 5 with 5 integers, each integer can be access through its index

    A[0] = 12;
    A[1] = 15;
    A[2] = 25;
    // this is how we store each value at index in array
    // * NOTE :- If we dont assign the value at address in array, the default value will be assigned as 0 or garbage value.

    cout << "The size of an array A is: " << sizeof(A) << endl;
    // it will print 20 because 1 integer take 4bit of space and there are total 5 integer (5 x 4 = 20)
    // sizeof() :- it is a compile time unary operator which can be use to compute the size of its operand.

    cout << "The elements of Array A are:" << endl
         << endl;

    cout << A[1] << endl;
    // it will print the value at the index 1 in the array.

    printf("%d\n\n", A[2]);
    // it is the syntax of C programming
    // here printf() works as cout, to print the outpunt and \n is for getting result in next line just like endl.

    // initalizing an array with different method

    int B[6] = {2, 4, 5, 6, 10, 12};
    // index    0  1  2  3  4   5

    cout << "The size of an array B is: " << sizeof(B) << endl;

    cout << "The elements of Array B are:" << endl
         << endl;

    cout << B[0] << endl;
    cout << B[4] << endl
         << endl;
    // this will print the value at address 0 & 4 in array B.

    // Another way to initializing an array

    int C[] = {2, 4, 5, 6, 7, 8, 9, 0, 90};
    // it is the initialization of array where size of an array depends on the number of elements inside the array

    cout << "The size of an array C is: " << sizeof(C) << endl;

    cout << "The elements of Array C are:" << endl
         << endl;

    cout << C[3] << endl;
    cout << C[4] << endl;
    cout << C[5] << endl;
    cout << C[7] << endl
         << endl;
    // this will print the value at address 4,5,7 in array C.

    cout << "Printing elements of Array A using for loop" << endl
         << endl;

    for (int i = 0; i < 5; i++)
    // using for loop to print the elements of array
    // for loop first initalize then test and then increment.
    {
        cout << "The Value at address[" << i << "] in Array A is :" << A[i] << endl;
        // this will print all the elements of Array A.
    }

    cout << endl
         << "Printing elements of Array B using for each loop" << endl
         << endl;

    for (int X : B)
    // using for each loop.
    {
        cout << X << endl;
        // this will print all the elements of Array B.
    }

    return 0;
}

