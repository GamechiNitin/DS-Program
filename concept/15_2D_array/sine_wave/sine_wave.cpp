#include <iostream>
using namespace std;

int main()

{
    int arr[4][4] = {{3, 4, 11, 14}, {2, 12, 1, 5}, {7, 8, 7, 6}, {14, 9, 10, 12}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSine Wave" << endl;

    for (int j = 0; j < 4; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 3; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}