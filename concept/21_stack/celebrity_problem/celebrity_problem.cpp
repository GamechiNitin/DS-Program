#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool knows(vector<vector<int>> &M, int n, int a, int b)
{
    return M[a][b] == 1;
}

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    // Step : Push All element
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    // Step :2

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (knows(M, n, a, b))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }

    // Step : 3 : Single element in stack is potentialy celebrity

    int candidate = s.top();
    bool rowCheck = false;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 0)
        {
            zeroCount++;
        }
    }

    if (zeroCount == n)
    {
        rowCheck = true;
    }

    bool colCheck = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][candidate] == 1)
        {
            oneCount++;
        }
    }

    if (oneCount == n - 1)
    {
        colCheck = true;
    }

    if (rowCheck == true && colCheck == true)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}

int main()
{

    // O(N)
    int n = 3;
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0},
    };

    int result = celebrity(M, n);
    cout << result << endl;
    return 0;
}
