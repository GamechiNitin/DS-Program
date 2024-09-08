#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 55, 6};

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << *arr << endl;
    cout << endl;

    // -----------

    cout << "4th " << *arr << endl;       // 2
    cout << "5th " << *arr + 1 << endl;   // 3
    cout << "6th " << *(arr + 1) << endl; // 55
    cout << "7th " << *(arr) + 1 << endl; // 3

    // ---- Formula 1 - p[i] = * (p + i)
    int p[5] = {23, 122, 41, 67};
    cout << "8th " << p[2] << endl;     // 41 Same value
    cout << "9th " << *(p + 2) << endl; // 41 Same Value

    // ---- Formula 2 - i[p] = * (i + p)  Both Same
    cout << "10th " << 2 [p] << endl;    // 41 Same Value
    cout << "11th " << *(2 + p) << endl; // 41 Same Value

    cout << endl;
    // Memory
    int temp[10] = {22, 33};
    cout << "Memory 1 " << sizeof(temp) << endl;  // 40 Bytes
    cout << "Memory 2 " << sizeof(*temp) << endl; // 4 Bytes
    cout << "Memory 3 " << sizeof(&temp) << endl; // 8 Bytes
    cout << endl;

    int *ptr = &temp[0];
    cout << "Memory 4 " << sizeof(ptr) << endl;  // 8 Bytes - pointing Address
    cout << "Memory 5 " << sizeof(*ptr) << endl; // 4 Bytes - pointing value
    cout << "Memory 6 " << sizeof(&ptr) << endl; // 8 Bytes - pointing value
}