#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;
struct Node *t, *last;

void createList(int a[], int x)
{
    first = new struct Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < x; i++)
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

void sortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    t = new struct Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    createList(arr, 6);
    display(first);
    sortedInsert(first,0);
    cout << "after insertion at Sorted position : ";
    display(first);
}
