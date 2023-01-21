/**
 * @file insertAtHead.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to insert the element at the start of singly linklist Using C and Cpp. */

#include <iostream>
using namespace std;
// header files

class node
// creating a class node
{
public:
    // public access specifier to access the data members and member functions of the class from anywhere in the program.
    int data;
    node *next;
    // creating a pointer of type node

    node(int val)
    // constructor to initialize the data members of the class
    {
        data = val;
        next = NULL;
        // assigning the value of val to data and assigning NULL to next
    }
};

// Insertion at head of Link list
void insertAtHead(node *&head, int val)
// function to insert the element at the start of link list
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Displaying the link list
void display(node *head)
// function to display the link list
{
    node *temp = head;
    // creating a temporary node and assigning the address of head to it
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        // traversing the link list till the last node is reached
    }
    cout << "NULL" << endl;
    // printing NULL at the end of link list
}

int main()
{
    node *head = NULL;           

    insertAtHead(head, 1);     
    insertAtHead(head, 2);      
    insertAtHead(head, 3);       
    // inserting the elements at the head of link list

    display(head);               
    // displaying the link list

    return 0;
}