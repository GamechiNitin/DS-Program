#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &arr)
{
    int n = arr.size();
    vector<int> next(n);
    next = nextSmallerElement(arr, n);
    vector<int> prev(n);
    prev = prevSmallerElement(arr, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = arr[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}
int maxArea(vector<vector<int>> &v, int n, int m)
{
    int ans = -1;
    int area = largestRectangleArea(v[0]);
    cout << "Area " << area << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] != 0)
            {
                v[i][j] = v[i][j] + v[i - 1][j];
            }
            else
            {
                v[i][j] = 0;
            }
        }
        int area2 = largestRectangleArea(v[i]);
        area = max(area, area2);
    }
    ans = area;
    return ans;
}

int main()
{
    int n = 4, m = 4;
    vector<vector<int>> v = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0},
    };

    int result = maxArea(v, n, m);
    cout << "Result " << result << endl;
    // Time : O(n * m)
    // Space : O(m) nos of column
    return 0;
}