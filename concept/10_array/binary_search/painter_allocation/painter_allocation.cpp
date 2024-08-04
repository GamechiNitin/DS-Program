#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int student, int mid)
{

    int studentCount = 1;
    int pagesum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > student || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int book(vector<int> arr, int student)
{

    int start = 0;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int student = 2;
    vector<int> painters = {5, 5, 5, 5};

    int result = book(painters, student);
    cout << result;
}
