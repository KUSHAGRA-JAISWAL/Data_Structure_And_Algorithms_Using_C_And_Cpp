/**
 * @file merge_sorted_linklist.cpp
 * @author KUSHAGRA-JAISWAL
 * @date 2023-01-21
 * @copyright Copyright (c) 2023
 */

/* Program to understand how to merge two link list in sorted order Using C and Cpp. */

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

// Merge two sorted link list
node* mergeList(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummyNode = new node(-1);
    node* p3= dummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1=p1->next;
        }else{
            p3->next = p2;
            p2=p2->next;
        }
        p3 = p3->next;
    }
    while(p1!=NULL){
        p3->next = p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next = p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
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
    node *head1 = NULL;    
    node *head2 = NULL;

    int arr[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};
    // creating two arrays

    for(int i=0; i<4; i++){
        insertAtTail(head1, arr[i]);
    }
    for(int i=0; i<3; i++){
        insertAtTail(head2, arr2[i]);
    }

    display(head1);   
    display(head2);             
    // displaying the link list

    node* mergehead = mergeList(head1, head2);
    // merging the two link list

    display(mergehead);
    // displaying the merged link list

    return 0;
}