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

int main()
{

    int arr3[10] = {77, 7, 3, 2, 5, 8, 22, 33, 44, 66};

    reverseFromIndex(arr3, 10, 2);
}
