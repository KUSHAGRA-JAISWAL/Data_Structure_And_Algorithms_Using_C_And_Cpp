#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        next = NULL;
        prev = NULL;
        data = val;
    }
};

// Insertion at head
void insertAtHead(node *&head, int val)
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

// Deletion at head
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

// Deletion
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

// length of link list
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

// append last k nodes of link list
node *appendK(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int l = length(head);
    int count = 1;
    k = k % l; // if k is greater than length of link list

    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }

        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

// Intersect Two Link List
void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

// Find the Intersection of two link list
int intersection(node *&head1, node *&head2)
{
    node *ptr1;
    node *ptr2;
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

// Displaying the list
void displayList(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
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
    displayList(head);
    // displayList(head);
    // insertAtHead(head, 5);
    // displayList(head);
    // deletion(head, 1);
    // displayList(head);
    // deletion(head, 3);
    // displayList(head);
    node *newHead = appendK(head, 3);
    displayList(newHead);

    node *head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head1, 7);
    insertAtTail(head1, 8);

    node *head2 = NULL;
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    intersect(head1, head2, 5);

    displayList(head1);
    displayList(head2);

    cout<<intersection(head1, head2)<<endl;

    return 0;
}