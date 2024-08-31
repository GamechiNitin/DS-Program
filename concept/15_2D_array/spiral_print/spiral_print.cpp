#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int row = 3;
    int column = 3;
    int count = 0;
    int total = row * column;

    int startRow = 0;
    int startColumn = 0;
    int endRow = row - 1;
    int endColumn = column - 1;

    vector<int> v;

    while (count < total)
    {
        // startRow
        for (int i = startColumn; count < total && i <= endColumn; i++)
        {
            v.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;

        // endColumn
        for (int i = startRow; count < total && i <= endRow; i++)
        {
            v.push_back(arr[i][endColumn]);
            count++;
        }
        endColumn--;

        // End Row
        for (int i = endColumn; count < total && i >= startColumn; i--)
        {
            /* code */
            v.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        // startColumn
        for (int i = endRow; count < total && i >= startRow; i--)
        {
            /* code */
            v.push_back(arr[i][startColumn]);
            count++;
        }
        startColumn++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}