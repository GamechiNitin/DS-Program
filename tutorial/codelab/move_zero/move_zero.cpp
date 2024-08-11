#include <iostream>
using namespace std;
void moveZeroes(int arr[], int len)
{

    int start = 0;
    int end = len;

    for (int j = 0; j < len; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[start]);
            start++;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[8] = {0, 1, 0, 5, 0, 8, 7, 9};

    moveZeroes(arr, 8);
}