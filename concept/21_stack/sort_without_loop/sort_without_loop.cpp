#include <iostream>
#include <stack>
using namespace std;

void sortInsert(stack<int> &s, int num)

{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int top = s.top();
    s.pop();
    sortInsert(s, num);
    s.push(top);
}
void sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();
    sort(s);

    sortInsert(s, num);
}

int main()
{
    stack<int> s;
    s.push(6);
    s.push(-2);
    s.push(-1);
    s.push(5);
    s.push(9);

    sort(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    // Time Complexity: 𝑂(𝑛2)
    // Space Complexity: 𝑂(𝑛)
    return 0;
}
