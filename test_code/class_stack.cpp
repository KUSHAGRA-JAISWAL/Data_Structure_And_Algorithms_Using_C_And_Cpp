#include <iostream>
using namespace std;

class Stack
{
public:
    int capacity;
    char *stack;
    int top;

    Stack(int size)
    {
        capacity = size;
        stack = new char[capacity];
        top = -1;
    }

    int isFull()
    {
        if (top == capacity - 1)
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

    void push(char c)
    {
        if (isFull())
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;

        stack[top] = c;
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
            cout << "Element at index " << i << " is : " << stack[i] << endl;
        }
    }

    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack Unerflow" << endl;
            return '/';
        }

        char topElement = stack[top];
        top--;
        return topElement;
    }
};

int main()
{
    Stack s1 = Stack(6);

    s1.push('A');
    s1.push('B');
    s1.push('C');
    s1.push('D');
    s1.push('E');
    s1.push('F');

    s1.traverse();

    cout << "---------------------------------------" << endl;

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

    s1.traverse();

    cout << "---------------------------------------" << endl;

    s1.push('X');
    s1.push('Y');
    s1.push('A');
    s1.push('B');
    s1.push('C');
    s1.push('D');
    s1.push('E');

    s1.traverse();

}
