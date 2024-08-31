#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int j = 0; j < row; j++)
    {
        swap(arr[j][0], arr[j][col - 1]);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}