#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<int> reverse(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        int e = q.front();
        q.pop();
        s.push(e);
    }
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        q.push(x);
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    queue<int> result = reverse(q);

    while (!result.empty())
    {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;
}