#include <iostream>
#include <vector>
using namespace std;

void sumOfArray(int a1[], int a2[], int n1, int n2)
{
    // Case 1 : Array 1 is larger
    // Case 2 : Array 2 is larger
    // Case 3 : Carry is Pending

    int carry = 0;

    int i = n1 - 1;
    int j = n2 - 1;

    vector<int> v;

    while (i >= 0 && j >= 0)
    {
        int sum = a1[i] + a2[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = a1[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        i--;
    }
    while (j >= 0)
    {
        int sum = a2[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        j--;
    }

    for (int k = v.size() - 1; k >= 0; k--)
    {
        cout << v[k] << " ";
    }
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arr2[1] = {6};

    sumOfArray(arr, arr2, 4, 1);
}