#include <iostream>
#include <stack>
using namespace std;

bool matches(char top, char current)

{
    if (top == '(' && current == ')')
    {

        return true;
    }
    else if (top == '{' && current == '}')
    {
        return true;
    }
    else if (top == '[' && current == ']')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isValidParenthesis(string input)
{
    stack<char> s;

    for (int i = 0; i < input.size(); i++)
    {
        char current = input[i];

        // if opening bracket, stack push
        if (current == '[' || current == '(' || current == '{')
        {
            s.push(current);
        }
        else
        {
            if (!s.empty())
            {

                char top = s.top();
                if (matches(top, current))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    return s.empty() ? true : false;
}

int main()
{
    string s1 = "[{()}]";
    string s2 = "[{(}}]";

    bool result = isValidParenthesis(s1);
    if (result)
    {
        cout << "Result 1 " << " Valid" << endl;
    }
    else
    {
        cout << "Result 1 " << " NOT Valid" << endl;
    }
    bool result2 = isValidParenthesis(s2);
    if (result2)
    {
        cout << "Result 2 " << " Valid" << endl;
    }
    else
    {
        cout << "Result 2 " << " NOT Valid" << endl;
    }

    return 0;
}