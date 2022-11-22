#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void createList(int x[], int n)
{
    struct Node *t, *last;
    first = new struct Node;
    first->data = x[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new struct Node;
        t->data = x[i];
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

struct Node *search(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return search(p->next, key);
}

int main()
{
    struct Node *temp;
    int a[] = {3, 5, 6, 7, 8, 11, 14, 17, 99};
    createList(a, 9);
    display(first);

    temp = search(first, 99);

    if (temp != NULL)
        cout << endl
             << "The key is : " << temp->data;

    else
        cout << endl
             << "The key was not found";

    return 0;
}