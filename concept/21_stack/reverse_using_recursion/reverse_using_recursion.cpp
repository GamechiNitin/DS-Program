#include <iostream>
#include <stack>
using namespace std;

void insertAtBotton(stack<int> &s, int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }
    else
    {
        int num = s.top();
        s.pop();
        insertAtBotton(s, value);
        s.push(num);
    }
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    reverse(s);

    insertAtBotton(s, num);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Before size : " << s.size() << endl;
    reverse(s);

    cout << "After size : " << s.size() << endl;

    while (!s.empty())
    {
        {
            cout << s.top() << endl;
            s.pop();
        }
    }

    return 0;
}