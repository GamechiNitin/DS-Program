#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>> &answer)
{
    // Best Case
    if (index >= nums.size())
    {
        answer.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(nums, index + 1, answer);
        // Back Track
        swap(nums[index], nums[i]);
    }
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> answer;
    int index = 0;
    solve(nums, index, answer);

    for (const vector<int> &perm : answer)
    {
        for (int num : perm)
        {
            cout << num << ' ';
        }
        cout << endl; // New line after each permutation
    }

    return 0;
}