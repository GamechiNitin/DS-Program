#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            cout << "Stack 1 underflow" << endl;
        }
    }
    int pop2()
    {

        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            cout << "Stack 2 underflow" << endl;
        }
    }
};
int main()
{
    Stack st(7);
    st.push1(2);
    st.push1(3);
    st.push2(9);
    st.push2(8);
    st.push2(8);
    return 0;
}