#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int count, int size)
{
    // Base Case
    if (count == size / 2)
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();

    solve(st, count + 1, size);
    st.push(num);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    solve(s, 0, 5);

    cout << s.size() << endl;

    while (!s.empty())
    {
        {
            cout << s.top() << endl;
            s.pop();
        }
    }
}