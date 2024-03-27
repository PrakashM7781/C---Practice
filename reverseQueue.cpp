#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }

    int popped = q.front();
    q.pop();

    reverseQueue(q);
    q.push(popped);
}

void reverseKGroup(queue<int> &q, int k)
{
    int i = 0;
    stack<int> s;
    while (i < k)
    {
        int popped = q.front();
        q.pop();
        s.push(popped);
    }
}

int main()
{
    // You can do it.

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseQueue(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}