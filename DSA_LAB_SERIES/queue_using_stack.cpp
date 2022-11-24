#include <iostream>
#include <stack>
using namespace std;

class Queue
{
public:
    stack<int> s1;
    stack<int> s2;

    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "no data" << endl;
            return -1;
        }

        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        int topvalue = s2.top();
        s2.pop();

        return topvalue;
    }

    // bool empty()
    // {
    //     if (s1.empty() && s2.empty())
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    return 0;

}