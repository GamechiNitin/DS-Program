#include <iostream>
using namespace std;

void update(int &n)
{
    n++;
}

int main()
{
    /*
    Reference Variable - Same memory but different name.
    type &referenceName = variableName;
    int &j = i;

    Avoid retrun type int* || int&
    */
    int i = 5;
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    // 5 6 7 7

    // Example 1
    int n = 9;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;

    return 0;
}