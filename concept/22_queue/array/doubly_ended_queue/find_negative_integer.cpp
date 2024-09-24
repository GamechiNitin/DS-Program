#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    deque<long long> dq;
    vector<long long> ans;

    // Process the first K elements
    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i); // Store the index of the negative number
        }
    }

    // Store answer of the first k-sized window
    if (!dq.empty())
    {
        ans.push_back(A[dq.front()]); // Get the value at the index of the first negative
    }
    else
    {
        ans.push_back(0);
    }

    // Remaining windows
    for (int i = K; i < N; i++)
    {
        // Removal
        if (!dq.empty() && dq.front() <= i - K)
        {
            dq.pop_front();
        }

        // Addition
        if (A[i] < 0)
        {
            dq.push_back(i); // Store the index
        }

        // Result for the current window
        if (!dq.empty())
        {
            ans.push_back(A[dq.front()]); // Get the value at the index of the first negative
        }
        else
        {
            ans.push_back(0);
        }
    }

    return ans;
}

int main()
{
    long long int A[] = {-8, 2, 3, -6, 10}; // Example input
    long long int N = sizeof(A) / sizeof(A[0]);
    long long int K = 2; // Window size

    vector<long long> result = printFirstNegativeInteger(A, N, K);

    // Print the result
    for (long long v : result)
    {
        cout << v << " ";
    }
    cout << endl;
    /*
    Time : O(N), where N is the number of elements in the array.
    Space : O(K) due to the deque storing indices of negative integers
    */
    return 0;
}
