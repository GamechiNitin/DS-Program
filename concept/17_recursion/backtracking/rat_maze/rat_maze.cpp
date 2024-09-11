#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<vector<int>> m, int n, int x, int y, vector<vector<int>> &visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(vector<vector<int>> m, int n, int x, int y, vector<vector<int>> &visited, string path, vector<string> &ans)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;
    // 4 Choices = D, L, R, U

    // down
    int newx = x + 1;
    int newy = y;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('D');
        solve(m, n, newx, y, visited, path, ans);
        path.pop_back();
    }
    // left
    newx = x;
    newy = y - 1;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('L');
        solve(m, n, newx, newy, visited, path, ans);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('R');
        solve(m, n, newx, newy, visited, path, ans);
        path.pop_back();
    }

    // UP
    newx = x - 1;
    newy = y;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('U');
        solve(m, n, newx, newy, visited, path, ans);
        path.pop_back();
    }

    visited[x][y] = 0;
}

int main()
{
    int n = 4;
    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1},
    };

    vector<string> ans;

    if (m[0][0] == 0)
    {
        cout << "No entry";
    }
    else
    {

        int x_axis = 0;
        int y_axis = 0;
        string path = "";

        vector<vector<int>> visited = {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        };

        solve(m, 4, x_axis, y_axis, visited, path, ans);
        sort(ans.begin(), ans.end());

        for (string s : ans)
        {
            cout << s << endl;
        }
    }

    return 0;
}