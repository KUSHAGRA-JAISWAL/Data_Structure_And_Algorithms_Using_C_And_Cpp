/**
 * @file deletion_crq_linklist.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to delete the element in circular linklist Using C and Cpp. */

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

// Insertion at head
void insertAtHead(node *&head, int val)
// function to insert the element at the beginning of link list
{
    node *n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
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
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

// Deletion at head
void deleteAtHead(node* head){
    node* temp = head;
    while(temp->next!= head){
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;
}


// Deletion in circular linklist
void deletion(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return; 
    } 
    node* temp=head;
    int count=1;
    while(count < pos - 1){
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

// Displaying the link list
void display(node *head)
// function to display the link list
{
    node *temp = head;
    do{
        cout << temp->data << "->";
        temp = temp->next;
    }while(temp!= head);
    cout << "NULL" << endl;
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

    deletion(head, 3);
    // deleting the element at the position 3

    display(head);
    // displaying the link list

    return 0;
}