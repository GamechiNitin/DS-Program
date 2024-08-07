#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Dynamic in nature
    */

    vector<int> a = {10, 55, 77, 33, 44, 88, 56};

    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        cout << a[i] << " ";
    }
    a.push_back(99);
    cout << endl;
    cout << a.capacity() << endl;
}