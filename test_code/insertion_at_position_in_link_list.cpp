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

void insertAtPosition(int pos, int n)
{
    struct Node *p, *temp;
    if (pos == 0)
    {
        temp = new struct Node;
        temp->data = n;
        temp->next = first;
        first = temp;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 1; i < pos - 1 && p != NULL; i++)
        {
            p = p->next;
        }
        if (p != NULL)
        {
            temp = new struct Node;
            temp->data = n;
            temp->next = p->next;
            p->next = temp;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    createList(arr, 6);
    display(first);
    insertAtPosition(5, 8);
    cout << "after insertion at position : ";
    display(first);
}
