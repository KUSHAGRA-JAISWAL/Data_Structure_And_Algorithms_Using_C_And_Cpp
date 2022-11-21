/**
 * @file structures_basics.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-11-20
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Structures in C & Cpp. */

#include <iostream>
using namespace std;
// header files

struct Rectangle
{
    int length;
    int breadth;
    // declearing a varable of type integer.
};

int main()
{
    cout << "The Concepts of Structures Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    /*******Structures******/

    /*
    A Structures in C++ is a collection of variables of different types under a single name.
    Arrays and Strings => can hold similar kind of data (int, float, char)
    Structures => can hold disimilar kind of data
    */

    /*****Syntax for creating Structures******/

    /*
    A Structure can be created as follows:
        struct employee{
            int code;
            float salary;       ==> This declares new user defined data type.
            char name[10];
        };
         semicolon is important
    */

    struct Rectangle r;
    // declearing a structure

    r.length = 10;
    r.breadth = 15;
    // dot(.) is use to access the mebmer.

    cout << "Area of Rectangle is : " << r.length * r.breadth << endl;
    // calculate the area of rectangle.

    return 0;
}