#include <iostream>
using namespace std;

int powerOf(int m, int n)
{
    // BS
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return m;
    }

    // RC
    int ans = powerOf(m, n / 2);

    if (n % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return m * ans * ans;
    }
}
int main()
{
    int m;
    int n;
    cout << "Enter number : ";
    cin >> m >> n;

    int result = powerOf(m, n);
    cout << "Power of " << m << "^" << n << " is " << result << endl;
}