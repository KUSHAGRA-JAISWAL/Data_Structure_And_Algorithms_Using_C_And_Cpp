#include <iostream>
#include <queue>
using namespace std;
class stack
{
public:
    int n;
    queue<int> q1;
    queue<int> q2;
    stack()
    {
        n = 0;
    }
    void push(int x)
    {
        // queue<int> temp;
        q2.push(x);
        n++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    void pop()
    {
        q1.pop();
        n--;
    }
    int peek()
    {
        return q1.front();
    }
    // int size()
    // {
    //     return n;
    // }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
}