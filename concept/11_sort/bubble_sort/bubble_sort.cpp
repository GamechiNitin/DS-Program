#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 5, 3, 8, 4, 1};

    int n = 6;

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}