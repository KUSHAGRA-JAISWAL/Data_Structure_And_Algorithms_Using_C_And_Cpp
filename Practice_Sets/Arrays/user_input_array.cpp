/**
 * @file user_input_array.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-11-19
 * @copyright Copyright (c) 2022
 */

/* Practice Problem to take input from user as Size of and array as well as number of elements of an array and display each element
using loops using C and Cpp. */

#include <iostream>
using namespace std;
// header files

int main()
{

    cout << "The Concepts of taking user input as size and element of Arrays Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    int n;
    // declaring variable of integer type

    cout << "enter the number of elements you want in array: ";
    cin >> n;
    // Just like Scanf it is used to accept the input from the standard input device

    cout << endl;
    // for next line

    int arr[n];
    // this is array decleration, it will declear the array of size n with n integers, each integer can be access through its index

    for (int i = 0; i < n; i++)
    // using for loop to take input from user in elements of array
    // for loop first initalize then test and then increment.
    {
        cout << "Enter the element for index " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    // using for loop to print the elements of array
    {
        cout << "Element at the index " << i << " is : " << arr[i] << endl;
        // prints the element of array
    }
    return 0;
}