#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insertion at head of Link list
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Insertion at end of link list
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Displaying the link list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// delete at head in link list
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

// delete at any position in link list
void deletion(node *&head, int val)
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
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

// reverse the link list
node *reverseList(node *&head)
{
    node *previous = NULL;
    node *current = head;
    node *nxt;

    while (current != NULL)
    {
        nxt = current->next;
        current->next = previous;

        previous = current;
        current = nxt;
    }
    return previous;
}

// reverse the link list recursively
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

// reverse the link list in group of k
node *reversek(node *&head, int k)
{
    node *previous = NULL;
    node *current = head;
    node *nxt;
    int count = 0;

    while (current != NULL && count < k)
    {
        nxt = current->next;
        current->next = previous;
        previous = current;
        current = nxt;
        count++;
    }
    if (nxt != NULL)
    {
        head->next = reversek(nxt, k);
    }
    return previous;
}

// make cycle in link list
void makecycle(node *&head, int pos)
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
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

// remove cycle in link list
void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast = fast->next;
    }
    slow->next=NULL;
}

int main()
{
    node *head = NULL;                      // empty link list
   /*
    insertAtTail(head, 1);                  // 1->NULL
    insertAtTail(head, 2);                  // 1->2->NULL
    insertAtTail(head, 3);                  // 1->2->3->NULL
    display(head);                          // 1->2->3->NULL
    insertAtHead(head, 4);                  // 4->1->2->3->NULL
    display(head);                          // 4->1->2->3->NULL
    deletion(head, 2);                      // 4->1->3->NULL
    display(head);                          // 4->1->3->NULL
    insertAtTail(head, 5);                  // 4->1->3->5->NULL
    display(head);                          // 4->1->3->5->NULL
    deletion(head, 5);                      // 4->1->3->NULL
    display(head);                          // 4->1->3->NULL
    node *newhead = reverseRecursive(head); // 3->1->4->NULL
    display(newhead);                       // 3->1->4->NULL
    insertAtTail(head, 1);                  // 4->1->NULL
    insertAtTail(head, 2);                  // 4->1->2->NULL
    insertAtTail(head, 3);                  // 4->1->2->3->NULL
    display(head);                          // 4->1->2->3->NULL
    node *newheadr = reversek(head, 2);     // 1->4->3->2->NULL
    display(newheadr);                      // 1->4->3->2->NULL
    deletion(head, 1);
    display(head);
    deletion(head, 2);
    display(head);
    deletion(head, 3);
    display(head);
    deletion(head, 4);
    display(head);
    */
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makecycle(head, 3);
   // display(head);
   cout<<detectCycle(head)<<endl;
   removeCycle(head);
   cout<<detectCycle(head)<<endl;
     display(head);
    return 0;
}