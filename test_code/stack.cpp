#include <iostream>
using namespace std;

#define capicity 5

int stack[capicity];

int top = -1;

int isFull()
{
    if (top == capicity - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

void push(int num)
{
    if (isFull())
    {
        cout << "stack overflow" << endl;
        return;
    }

    top++;

    stack[top] = num;
    return;
}

void traverse()
{
    if (isEmpty())
    {
        cout << "stack underflow" << endl;
        return;
    }

    for (int i = 0; i <= top; i++)
    {
        cout << "Element an the index " << i << " is: " << stack[i] << endl;
    }
}

int pop()
{
    if (isEmpty())
    {
        cout << "stack underflow" << endl;
        return -1;
    }

    int topElement = stack[top];
    top--;
    return topElement;
}

int main()
{
    int data;

    push(12);
    push(13);
    push(15);

    traverse();

    cout << "---------------------------------------" << endl;

    data = pop();

    cout << "data Poped :" << data << endl;

    traverse();

    cout << "---------------------------------------" << endl;

    push(40);
    push(50);
    push(80);

    traverse();

    cout << "---------------------------------------" << endl;

    pop();
    pop();
    pop();
    pop();

    traverse();
}