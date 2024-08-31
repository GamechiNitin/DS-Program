#include <iostream>
using namespace std;

int main()
{
    int arrRowWise[3][4];

    // Taking input Row Wise
    cout << "Taking input Row Wise" << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arrRowWise[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arrRowWise[row][col] << " ";
        }
        cout << endl;
    }

    int arrColWise[3][4];
    cout << "-------------------" << endl;
    cout << "Taking input Column Wise" << endl;

    // Taking input Column Wise
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arrColWise[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arrColWise[row][col] << " ";
        }
        cout << endl;
    }
}