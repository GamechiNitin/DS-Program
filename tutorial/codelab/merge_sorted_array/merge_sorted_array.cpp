#include <iostream>
using namespace std;

void solution1(int arr[], int arr2[], int n, int m)
{
    int len = n + m;
    int mixArr[len] = {0};
    int a = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr[i] < arr2[j])
        {
            mixArr[a++] = arr[i++];
        }
        else
        {

            mixArr[a++] = arr2[j++];
        }
    }

    while (i < n)
    {
        mixArr[a++] = arr[i++];
    }
    while (j < m)
    {
        mixArr[a++] = arr2[j++];
    }

    for (int k = 0; k < len; k++)
    {
        cout << mixArr[k] << " ";
    }
}
int main()
{
    int arr[8] = {
        1,
        3,
        7,
        9,
        11,
        13,
        17,
        23};
    int arr2[7] = {
        2,
        4,
        6,
        8,
        10,
        20, 24};

    solution1(arr, arr2, 8, 7);
}
