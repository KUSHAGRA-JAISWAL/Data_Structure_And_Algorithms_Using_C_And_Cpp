/**
 * @file insertion_dbly_linklist.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to insert the element in doubly linklist Using C and Cpp. */

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
    node *prev;
    // creating a pointer of type node

    node(int val)
    // constructor to initialize the data members of the class
    {
        data = val;
        next = NULL;
        prev = NULL;
        // assigning the value of val to data and assigning NULL to next
    }
};

// Insertion at head
void insertAtHead(node *&head, int val)
// function to insert the element at the beginning of link list
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

// Insertion at tail
void insertAtTail(node *&head, int val)
// function to insert the element at the end of link list
{
    node *temp = head;
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
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
    insertAtTail(head, 1);       
    insertAtTail(head, 2);   
    insertAtTail(head, 3);       
    insertAtTail(head, 4);
    insertAtTail(head, 5);       
    insertAtTail(head, 6);    
    // inserting the elements at the end of link list

    display(head);               
    // displaying the link list

    return 0;
}