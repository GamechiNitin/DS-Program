#include <iostream>
using namespace std;

int main(){
    // Interger
    int a = 124;
    cout << a << endl;

    // Characters : char
    char b = 'N';
    cout << b << endl;

    // Boolean : 0 | 1
    bool isValue = true;
    cout << isValue << endl;
    cout << !isValue << endl;

    // Float
    float f = 1.57;
    cout << f << endl;

    // Double
    double d = 1.57445;
    cout << d << endl;

    // Size of DataTypes
    int size = sizeof(d);
    cout << "Size of d is :=> " << size << endl;
}