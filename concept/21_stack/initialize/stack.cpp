#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {

        return top == -1 ? true : false;
    }
    int length()
    {
        return top + 1;
    }
};
int main()
{

    /*
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();

    cout << "Size " << s.size() << endl;
    cout << "Size " << s.size() << endl;
    */

    Stack st(5);
    st.push(88);
    st.push(99);
    st.push(77);
    st.pop();
    cout << "Size " << st.length() << endl;
    cout << "empty " << st.isEmpty() << endl;
    cout << "Top " << st.peek() << endl;
    return 0;
}