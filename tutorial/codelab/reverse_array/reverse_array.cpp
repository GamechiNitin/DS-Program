#include <iostream>

using namespace std;

void reverseFromIndex(int arr[], int n, int s)
{
    int start = s;

    int end = n - 1;

    while (start < end)
    {
        if (start == end)
        {
            break;
        }
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    cout << "\n-------Reverse Ans 2 ---------";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

void solution2(int arr[], int n)
{
    int start = 0;

    int end = n - 1;

    while (start < end)
    {
        if (start == end)
        {
            break;
        }
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    cout << "\n-------Reverse Ans 2 ---------";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}
void solution1(int arr[])
{
    cout << "\n-------Reverse Ans 1 ---------";

    for (int i = 3; i >= 0; i--)
    {

        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[4] = {1, 3, 2, 4};
    int arr2[5] = {45, 5, 23, 78, 77};
    int arr3[10] = {77, 7, 3, 2, 5, 8, 22, 33, 44, 66};

    solution1(arr);
    solution2(arr2, 5);
    // ---------------
    reverseFromIndex(arr3, 10, 2);
}
