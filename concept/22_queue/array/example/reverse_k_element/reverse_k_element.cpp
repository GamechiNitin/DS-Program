#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    if (q.empty())
    {
        return q;
    }

    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    // Step 2 : Fetch from stack and push in queue

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // Step 3 : Fetch n-k element from Queue and push back

    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> result = modifyQueue(q, 3);

    while (!result.empty())
    {
        int val = result.front();
        cout << val << " ";
        result.pop();
    }
    cout << endl;

    // 3 2 1 4 5
};