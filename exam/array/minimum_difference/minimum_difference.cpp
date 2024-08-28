#include <iostream>
using namespace std;

int main()
{

    int arr[4] = {6, 2, 4, 10};

    int difference = 0;
    for (int i = 0; i < 3; i++)
    {

        int a = arr[i];
        int b = arr[i + 1];
        if (a > b)
        {
            // swap(a, b);
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    difference = arr[1] - arr[0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {

            if ((arr[j] - arr[i]) <= difference)
            {
                difference = arr[j] - arr[i];
                cout << "\nPair is " << arr[i] << "," << arr[j] << " with " << difference << endl;
            }
        }
    }
}
