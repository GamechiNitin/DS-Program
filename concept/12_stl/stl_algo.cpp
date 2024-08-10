#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(8);
    v.push_back(5);
    v.push_back(6);

    sort(v.begin(), v.end());

    cout << "5 is Present or not " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "10 is Present or not " << binary_search(v.begin(), v.end(), 10) << endl;
    cout << "Lower Bound of 5  " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound of 5  " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "MAX " << max(a, b) << endl;
    cout << "MIN " << min(a, b) << endl;

    cout << "Swap Before" << a << " " << b << endl;
    swap(a, b);
    cout << "Swap " << a << " " << b << endl;
    cout << "Swap " << a << " " << b << endl;

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());
    cout << "Reverse abcd  " << abcd << endl;

    cout << "Before Rotate ";
    for (int i : v)
    {
        cout << i << " ";
    }
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << endl
         << "After Rotate ";

    for (int i : v)
    {
        cout << i << " ";
    }
}
