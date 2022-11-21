#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;
struct Node *last = NULL;

void createNode(int n)
{
    struct Node *temp = new struct Node;
    temp->data = n;
    temp->next = NULL;

    if (first == NULL)
    {
        first = temp;
        last = first;
    }

    last ->next = temp;
    last = temp;
}

void display()
{
    struct Node *t = first;
    
    while(t != NULL )
    {
        cout<<t->data<<endl;
        t = t ->next;
    }
}

int main()
{

    createNode(12);
    createNode(13);
    createNode(16);
    createNode(126);
    createNode(17);

    display();

    return 0;
}