#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {22, 23, 30, 60},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int row = 3;
    int col = 4;
    int target = 17;

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int e = arr[mid / col][mid % col];
        if (e == target)
        {
            cout << "Present" << endl;
            return 0;
        }

        if (e < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "Not Present" << endl;
}