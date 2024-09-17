#include <iostream>
#include <stack>
using namespace std;

void insertAtBotton(stack<int> &s, int value)
{
    if (s.empty())
    {
        s.push(value);
    }
    else
    {
        int num = s.top();
        s.pop();
        insertAtBotton(s, value);
        s.push(num);
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Before size : " << s.size() << endl;
    insertAtBotton(s, 3);

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