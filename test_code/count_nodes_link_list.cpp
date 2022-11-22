#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void createList(int arr[], int n)
{
    struct Node *t, *last;
    first = new struct Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new struct Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(struct Node *p)
{
    int c = 0;

    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int main()
{
    int a[] = {2, 3, 5, 7, 8, 9};
    createList(a, 6);
    cout<<count(first);
}