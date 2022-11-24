/* Write a program to store the contacts (name & mobile number) in your smart phone in a singly linked list
(Ensure that they are in alphabetical order) Provide options for inserting new contacts. */

#include <iostream>
using namespace std;

struct Node
{
    string data;
    struct Node *next;
};

struct Node *first = NULL;
struct Node *last = NULL;

void createList(string a[], int n)
{
    struct Node *t;

    first = new struct Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new struct Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    string x[] = {"hrv", "kush", "harsh"};
    string y[] = {"1234", "3456", "5678"};
    createList(x, x->size());
    display(first);
    first = NULL;
    last = NULL;
    createList(y, y->size());
    display(first);

    return 0;
}