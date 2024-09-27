#include <iostream>
#include <queue>
using namespace std;

int solve(int *arr, int n, int k)
{
    // Deques to store indices of maximum and minimum elements in the current window
    deque<int> maxi(k); // For maximums
    deque<int> mini(k); // For minimums

    // Process the first 'k' elements to initialize the deques
    for (int i = 0; i < k; i++)
    {
        // Maintain the decreasing order in 'maxi' deque
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        // Maintain the increasing order in 'mini' deque
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        // Add current index to both deques
        maxi.push_back(i);
        mini.push_back(i);
    }

    // Initialize answer with the first window's max and min sum
    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];

    // Slide the window from 'k' to 'n'
    for (int i = k; i < n; i++)
    {
        // Remove elements that are out of this window from both deques
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // Maintain the decreasing order in 'maxi' deque for the new element
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        // Maintain the increasing order in 'mini' deque for the new element
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        // Add current index to both deques
        maxi.push_back(i);
        mini.push_back(i);

        // Add the sum of current window's max and min to answer
        ans += arr[maxi.front()] + arr[mini.front()];
    }

    return ans; // Return the final answer
}

int main()
{
    // Sample array and window size
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    // Calculate and print the result for the given array and window size
    cout << solve(arr, 7, 4);

    /*
    op : 18
    Time : O(n)
    Time : O(k)

    */
    return 0;
}
