// Queue using array

#include <iostream>
using namespace std;

class Queue
{
public:

    int f;
    int r;
    int s;
    int *q;

    Queue(int s)
    {
        f = r = -1;
        s = 10;
        q = new int[s];
    }
    void enqueue(int x)
    {
        if (r == s - 1)
        {
            cout << "queue full" << endl;
        }
        else
        {
            r++;
            q[r] = x;
        }
    }

    int dequeue()
    {
        int x = -1;
        if (f == r)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            x = q[f + 1];
            f++;
        }
        return x;
    }
    void display()
    {
        for (int i = f + 1; i <= r; i++)
        {
            cout << q[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}