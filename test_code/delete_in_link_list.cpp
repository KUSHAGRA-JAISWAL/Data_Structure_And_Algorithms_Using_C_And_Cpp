#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void createList(int arr[], int x)
{
    struct Node *t, *last;
    first = new struct Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < x; i++)
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
    cout<<endl;
}

int deleteAtPosition(struct Node *p, int pos)
{
    struct Node *q;
    int x = -1;
    if (pos == 1)
    {
        x = first->data;
        p = first;
        first = first->next;
        delete p;
    }
    else
    {
        p = first;
        q = NULL;
        for (int i = 0; i < pos - 1 && p != NULL; i++)
        {
            q=p;
            p=p->next;
        }
            q->next = p->next;
            x = p->data;
            delete p;
        return x;
    }
}

int main()
{
    int a[] = {4, 6, 7, 4, 3, 2};
    createList(a, 6);
    display(first);
    deleteAtPosition(first,2);
    display(first); 
    return 0;
}