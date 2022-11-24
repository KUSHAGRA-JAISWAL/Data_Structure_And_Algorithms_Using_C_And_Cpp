#include <iostream>
using namespace std;

class Queue
{
    public:
    int *q;
    int f;
    int r;
    
    Queue(int size)
    {
        q = new int [size];
        f = r = -1;
    }

    int isEmpty()
    {
        return f == r;
    }

    int isFull()
    {
        return r;
    }
};

int main()
{
    return 0;
}