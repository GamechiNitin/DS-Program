#include <iostream>
#include <vector>
// #include <math>

#include <algorithm>
using namespace std;

bool isPossibleSol(vector<int> stalls, int cows, int mid)
{
    int cowsCount = 1;
    int sum = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - sum >= mid)
        {
            sum += stalls[i];
            cowsCount++;
            if (cowsCount == cows)
            {
                return true;
            }
            sum = stalls[i];
        }
    }

    return false;
}
int findSpace(vector<int> stalls, int cows)
{
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int maxi = -1;

    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int answer = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (isPossibleSol(stalls, cows, mid))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return answer;
}

int main()
{
    int cows = 2;
    vector<int> stalls = {4, 2, 1, 3, 6};
    vector<int> stall2 = {4, 2, 1, 3, 6};

    int result = findSpace(stalls, cows);
    cout << result;
}