#include <iostream>
// #include <array>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 5, 58, 7, 6};

    array<int, 5> a = {10, 5, 58, 7, 6};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd index " << a.at(2) << endl;
    cout << "Element is Empty " << a.empty() << endl;
    cout << "Element First " << a.front() << endl;
    cout << "Element Last " << a.back() << endl;
}