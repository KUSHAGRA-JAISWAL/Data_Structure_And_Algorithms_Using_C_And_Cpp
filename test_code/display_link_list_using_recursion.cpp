#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create(int arr[], int n)
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

void rDisplay(struct Node *p)
{

    if (p != NULL)
    {
        cout << p->data << " ";
        rDisplay(p->next);
    }
}

int main()
{
    int a[] = {6, 1, 4, 55, 66, 77, 81, 2, 9};
    create(a, 9);
    rDisplay(first);

    return 0;
}