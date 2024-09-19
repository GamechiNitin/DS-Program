#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> smaller(vector<int> &v)
{
    stack<int> s;
    int n = v.size();
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int current = v[i];
        while (s.top() >= current)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(current);
    }

    return ans;
}
int main()
{
    vector<int> arr = {2, 1, 4, 3};
    vector<int> result = smaller(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    // ----------
    vector<int> arr2 = {5, 9, 6, 4};

    vector<int> result2 = smaller(arr2);
    for (int i = 0; i < result2.size(); i++)
    {
        cout << result2[i] << " ";
    }
    cout << endl;
    return 0;
}