#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Row " << i + 1 << " sum is " << sum << endl;
    }
}