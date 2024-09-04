#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool big = search(arr + 1, size - 1, key);
        return big;
    }
}

int main()
{

    cout << "Enter key to search" << endl;
    int key;
    cin >> key;
    int arr[5] = {
        3,
        2,
        5,
        1,
        6};

    bool result = search(arr, 5, key);
    if (result)
    {

        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}