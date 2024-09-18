#include <iostream>
#include <stack>

using namespace std;

int validNumber(string pattern)
{
    // Odd Check
    if (pattern.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < pattern.length(); i++)
    {
        char ch = pattern[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    // for invalid
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main()
{
    string patern1 = "{}{}";
    string patern2 = "}{}";
    string patern3 = "}}}{{{";

    /* Suppose Patter
    {{{{{
    }}}}}}
    }}}}{{{{
    */

    cout << validNumber(patern1) << endl;
    cout << validNumber(patern2) << endl;
    cout << validNumber(patern3) << endl;
    return 0;
}