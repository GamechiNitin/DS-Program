#include <iostream>
#include <stack>
using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;

    int n, s;
    int freespot;

public:
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // Top initialize
        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        // Next initialize
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }
        next[s - 1] = -1;

        // Freespot initialize
        freespot = 0;
    }

    bool push(int x, int m)
    {
        // Check overflow
        if (freespot == -1)
        {
            return false;
        }
        // Find index
        int index = freespot;

        // Update freespot
        freespot = next[index];

        // Insert arr
        arr[index] = x;

        // Update Next
        next[index] = top[m - 1];

        // Update Top
        top[m - 1] = index;

        // for (int i = 0; i < s; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        return true;
    }

    int pop(int m)
    {
        // check underflow

        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
    // Destructor to free allocated memory
    ~NStack()
    {
        delete[] arr;
        delete[] top;
        delete[] next;
    }
};

int main()
{

    /*
    N => Number of Stack
    S => Size of Array
    Q => Number of Queries

    Type 1 => PUSH
    Type 2 => POP

    Step 1 - Find index
    Step 2 - Update freespot
    Step 3 - Insert in Array
    Step 4 - Update Next
    Step 5 - Update Top

    Time Complexity = Push & POP O(1)
    Space Complexity = O(s+n)
    */
    NStack stack(3, 6); // 3 stacks and size of array is 6
    cout << "Push 10: " << stack.push(10, 1) << endl;
    cout << "Push 20: " << stack.push(20, 1) << endl;
    cout << "Push 30: " << stack.push(30, 1) << endl;

    cout << "POP from stack 1: " << stack.pop(1) << endl;
    cout << "POP from stack 1: " << stack.pop(1) << endl;
    cout << "POP from stack 1: " << stack.pop(1) << endl;

    return 0;
}