#include <iostream>
using namespace std;

int factorial(int m)
{
    if (m == 1)
    {
        return 1;
    }

    int small = factorial(m - 1);
    int big = m * small;

    return big;
}

int main()
{

    int n;
    cout << "Enter the number : ";

    cin >> n;

    int ans = factorial(n);

    cout << "Factorial  of " << n << " is " << ans << endl;
}