#include <iostream>
using namespace std;

double precesion(int n, int previous)
{

    double factor = 1;
    double ans = previous;

    for (int i = 0; i < 3; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int findSquare(int arr[], int size)
{
    int start = 0;
    int ans = -1;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int square = mid * mid;
        if (square == size)
        {
            return mid;
        }
        else if (square < size)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int squareRoot(int n)
{

    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    int square = findSquare(arr, n);
    cout << square << endl;
    double squareprecesion = precesion(n, square);
    cout << squareprecesion << endl;

    return square;
}

int main()
{
    int n;
    cout << "Enter input : ";
    cin >> n;
    squareRoot(n);
}