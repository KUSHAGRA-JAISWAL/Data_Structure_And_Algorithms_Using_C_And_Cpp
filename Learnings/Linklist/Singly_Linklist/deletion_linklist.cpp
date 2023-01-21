/**
 * @file insertAtHead.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to delete the element in the singly linklist Using C and Cpp. */

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

// delete at head in link list
void deleteAtHead(node *&head)
// function to delete the element at the start of link list
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

// delete at any position in link list
void deletion(node *&head, int val)
// function to delete the element at the start of link list
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    if(head->data == val)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    // deleting the node
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

    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    // inserting the elements at the start of link list

    display(head);
    // displaying the link list

    deletion(head, 3);
    // deleting the element at the position 3

    display(head);
    // displaying the link list

    return 0;
}
