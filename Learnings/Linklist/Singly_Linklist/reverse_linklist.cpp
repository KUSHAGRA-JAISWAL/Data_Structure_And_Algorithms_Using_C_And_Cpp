/**
 * @file reverse_linklist.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to reverse the singly linklist Using C and Cpp. */

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

// Insertion at end of link list
void insertAtTail(node *&head, int val)
// function to insert the element at the end of link list
{
    node *n = new node(val);
    // creating a new node and assigning the value of val to data
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    // traversing the link list till the last node is reached
    {
        temp = temp->next;
        // assigning the address of next node to temp
    }
    temp->next = n;
    // assigning the address of new node to the next pointer of last node
}

// reverse the link list
node *reverseList(node *&head)
// function to reverse the link list
{
    node *previous = NULL;
    node *current = head;
    node *nxt;
    // creating three pointers of type node

    while (current != NULL)
    {
        nxt = current->next;
        current->next = previous;

        previous = current;
        current = nxt;
    }
    return previous;
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
    // inserting the elements at the end of link list

    display(head);
    // displaying the link list

    node *revHead = reverseList(head);
    // reversing the link list

    display(revHead);
    // displaying the link list

    return 0;
}