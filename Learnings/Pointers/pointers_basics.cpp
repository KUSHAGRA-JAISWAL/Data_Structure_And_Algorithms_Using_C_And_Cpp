/**
 * @file pointers_basics.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-11-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Pointers in C & Cpp. */

#include <iostream>
using namespace std;
// header files

int main()
{
    cout << "The Concepts of Pointers Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    /*
   What is Pointers?

   A pointer is a variable which stores the address of another variable.

   ex- int i = 34;   address of i is 5566
       int j = 5566; address of j is 7788
       here j is a poiter and j points to i .
   */

    int a = 10;
    // definig a variable type of integer

    int *p;
    // declearing a variable of address type

    p = &a;
    // initalization

    cout << "The value of a is : " << a << endl;
    // this will normally print the value of a

    cout << "The value of a using pointer is : " << *p << endl;
    // this will print the value of a using dreferencing

    cout << "The address of variable a is : " << &a << endl;
    // this will print the address of a

    cout << "The address of variable a using pointer is : " << p << endl;
    // this will print the address of a uing pointer variable

    return 0;
}