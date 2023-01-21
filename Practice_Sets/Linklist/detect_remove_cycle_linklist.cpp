/**
 * @file detect_remove_cycle_linklist.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to detect and remove the cycle from linklist using C and Cpp. */

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

// make cycle in link list
void makecycle(node *&head, int pos)
// function to make cycle in link list
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {

        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

// detect cycle in link list
bool detectCycle(node *&head)
{
    // function to detect cycle in link list
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// remove cycle in link list
void removeCycle(node *&head)
{
    // function to remove cycle in link list
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
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

    makecycle(head, 3);
    // making cycle in link list

    cout << detectCycle(head) << endl;
    // detecting cycle in link list

    removeCycle(head);
    // removing cycle in link list

    cout << detectCycle(head) << endl;
    // detecting cycle in link list

    return 0;
}