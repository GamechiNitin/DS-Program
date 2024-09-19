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

int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};

    int result = largestRectangleArea(arr);
    cout << " Result 1 : " << result << endl;
    //  Result 1 : 10
    // Time & Space : O(n)
    return 0;
}
