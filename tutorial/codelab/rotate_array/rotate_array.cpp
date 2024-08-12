#include <iostream>
#include <vector>
using namespace std;

void rotateArray(int arr[], int index, int k)
{
    vector<int> v(index);

    for (int i = 0; i < index; i++)
    {
        int j = (i + k) % index;
        v[j] = arr[i];
    }

    for (int m = 0; m < v.size(); m++)
    {
        cout << v[m] << " ";
    }
}
int main()
{
    int arr[6] = {5, 2, 3, 4, 8, 9};
    int n = 6;
    int k = 3;

    rotateArray(arr, n, k);
}