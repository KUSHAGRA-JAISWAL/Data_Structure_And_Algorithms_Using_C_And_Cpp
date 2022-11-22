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

void display(struct Node *p)
{

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int rMax(struct Node *p)
{
    int x = 0;

    if (p != NULL)
    {
        x = rMax(p->next);
        if (x > p->data)
        {
            return x;
        }
        return p->data;
    }
    return INT32_MIN;
}

int main()
{
    int a[] = {6, 1, 4, 55, 66, 77, 81, 2, 9};
    create(a, 9);
    display(first);
    cout << endl
         << "The maximum elements of the link list using recursion is : " << rMax(first);

    return 0;
}