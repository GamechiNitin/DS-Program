#include <iostream>
using namespace std;

int powerOf(int m)
{
    if (m == 0)
    {
        return 1;
    }

    int small = powerOf(m - 1);
    int big = 2 * small;
    return big;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int result = powerOf(n);
    cout << "Power of " << n << " is " << result << endl;
}