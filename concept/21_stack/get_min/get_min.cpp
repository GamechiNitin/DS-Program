#include <iostream>
#include <stack>

using namespace std;

class MStack
{
    int *arr;
    stack<int> s;
    int mini = INT_MAX;

public:
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                int value = 2 * data - mini;
                s.push(value);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        if (s.empty())
        {
            return -1;
        }

        int curr = s.top();
        s.pop();
        if (curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMini = mini;
            int val = 2 * mini - curr;
            mini = val;
            return mini;
        }
    }

    int top()
    {
        if (s.empty())
        {
            return -1;
        }

        int curr = s.top();
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }
    bool empty()
    {
        return s.empty();
    }

    int
    getMin()
    {
        return s.empty() ? -1 : mini;
    }
};

int main()
{
    MStack ms;
    ms.push(3);
    ms.push(5);
    cout << "Minimum: " << ms.getMin() << endl; // 3
    ms.push(2);
    cout << "Minimum: " << ms.getMin() << endl; // 2
    ms.push(1);
    cout << "Minimum: " << ms.getMin() << endl; // 1
    ms.pop();
    cout << "Minimum: " << ms.getMin() << endl; // 2
    ms.pop();
    cout << "Top: " << ms.top() << endl;        // 5
    cout << "Minimum: " << ms.getMin() << endl; // 2
}