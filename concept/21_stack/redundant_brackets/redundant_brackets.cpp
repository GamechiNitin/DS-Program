#include <iostream>
#include <stack>
using namespace std;

bool isRedudant(
    stack<char> s,
    string temp)
{

    for (int i = 0; i < temp.size(); i++)
    {
        char ch = temp[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            s.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isRedundant = true;
                while (s.top() != '(')
                {
                    char top = s.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    s.pop();
                }

                if (isRedundant == true)
                {
                    return true;
                }
                s.pop();
            }
        }
    }
    return false;
}

int main()
{
    string temp = "((s+b))";
    string temp1 = "(s+b)";

    stack<char> s;
    stack<char> s1;

    bool result = isRedudant(s, temp);

    if (result)
    {
        cout << "Redudant" << endl;
    }
    else
    {
        cout << "Not Redudant" << endl;
    }

    bool result2 = isRedudant(s1, temp1);

    if (result2)
    {
        cout << "Result 2 : Redudant" << endl;
    }
    else
    {
        cout << "Result 2 :  Not Redudant" << endl;
    }

    return 0;
}