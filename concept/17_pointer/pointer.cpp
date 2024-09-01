#include <iostream>
using namespace std;

int main()
{
    int i = 7;

    // Address of Operator - &
    cout << "Address of num is : " << &i << endl;
    cout << endl;

    int *ptr = &i;
    cout << "Address of is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;
    cout << "Size of i is : " << sizeof(i) << endl;
    cout << "Size of i is : " << sizeof(ptr) << endl;

    cout << endl;

    double d = 4.3;
    double *ptr2 = &d;
    cout << "Address of is : " << ptr2 << endl;
    cout << "Value is : " << *ptr2 << endl;
    cout << "Size of d is : " << sizeof(d) << endl;
    cout << "Size of d is : " << sizeof(ptr2) << endl;

    // Null Pointer initialze
    cout << endl
         << "Null Pointer initialze" << endl;
    int m = 5;
    int *p = 0;
    p = &m;
    cout << "Address of is : " << p << endl;
    cout << "Value is : " << *p << endl;

    cout << endl
         << "Copy Pointer" << endl;

    // Copy Pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // Arithmetic Pointer
    int y = 3;
    int *t = &y;
    // cout << *t++ << endl;   // 3s
    // cout << (*t)++ << endl; // 4

    *t = *t + 1;
    cout << "Before t " << t << endl; // 0x5ffe60
    t = t + 1;
    cout << "After t " << t << endl; // 0x5ffe64
}