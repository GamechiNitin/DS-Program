#include <iostream>
#include <stack>
#include <climits> // For INT_MAX

using namespace std;

// Struct to hold the value and the current minimum
struct StackNode
{
    int value;
    int currentMin;
};

class MStack
{
    stack<StackNode> s;

public:
    void push(int data)
    {
        StackNode newNode;
        newNode.value = data;
        // If the stack is empty, the current minimum is the new data
        if (s.empty())
        {
            newNode.currentMin = data;
        }
        else
        {
            // The current minimum is the minimum of the new data and the top node's minimum
            newNode.currentMin = min(data, s.top().currentMin);
        }
        s.push(newNode);
    }

    int pop()
    {
        if (s.empty())
        {
            return -1; // Stack is empty
        }
        int poppedValue = s.top().value;
        s.pop();
        return poppedValue; // Return the popped value
    }

    int top()
    {
        if (s.empty())
        {
            return -1; // Stack is empty
        }
        return s.top().value; // Return the value of the top node
    }

    bool empty()
    {
        return s.empty();
    }

    int getMin()
    {
        if (s.empty())
        {
            return -1; // Stack is empty
        }
        return s.top().currentMin; // Return the minimum from the top node
    }
};

int main()
{
    MStack ms;
    ms.push(3);
    ms.push(5);
    cout << "Minimum: " << ms.getMin() << endl; // Output: 3

    ms.push(2);
    cout << "Minimum: " << ms.getMin() << endl; // Output: 2

    ms.push(1);
    cout << "Minimum: " << ms.getMin() << endl; // Output: 1

    ms.pop();
    cout << "Minimum: " << ms.getMin() << endl; // Output: 2

    ms.pop();
    cout << "Top: " << ms.top() << endl;        // Output: 5
    cout << "Minimum: " << ms.getMin() << endl; // Output: 2

    return 0;
}
