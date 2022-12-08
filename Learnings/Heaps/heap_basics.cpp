/**
 * @file heap_basics.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2022-12-04
 * @copyright Copyright (c) 2022
 */

/* Program to understand the concepts of Heaps in C & Cpp. */

#include <iostream>
using namespace std;
// header files

int main()
{
    cout << "The Concepts of Heaps Using C and Cpp" << endl;
    // cout is an object or class of iostream, it is used to display the output to the standard output device i.e. monitor
    // endlis use to print the output in next line

    cout << "---------------------------------------" << endl;
    // for some space in terminal.

    /*********  Heaps  ***********/

    /*
    The very first condition of heap is it is a complete binary tree.
    Syntax
    The syntax of declearing heap using an array looks like
    int marks[90]        => integer heap array
    char name[20]        => character heap array or string
    float percentile[90] => float heap array
    It is very important to note that heap index start from zero 1.
    */

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

    /***** M I N Heap *****/

    /*
    Every node should have an element Smaller than or equal to all it's decendence. {duplicates are also
    allowed} If this condition satisfy it is called M I N Heap.

                                    5
                                  /   \
                                /      \
                              15        12
                             /  \      /  \
                           /     \   /     \
                          20     25 30      18

            int heap[10] = {30,20,15,5,10,12, 6,  ,  ,  };
                 index   =  1  2  3  4  5  6 7  8  9  10

    Height of the tree and Heap will be log(n) only.
    */

    int heap[7] = {30,20,15,5,10,12,6};
    // declearing a heap array

    for (int i = 0; i < 7; i++)
    {
        cout<<"The element at the index "<<i<<" is : "<<heap[i]<<endl;
        //printing the elements of an heap array
    }

        return 0;
}