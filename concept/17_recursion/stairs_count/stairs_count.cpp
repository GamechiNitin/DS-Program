#include <iostream>
using namespace std;

int stair(int s)
{
    if (s < 0)
    {
        return 0;
    }
    if (s == 0)
    {
        return 1;
    }

    int res = stair(s - 1) + stair(s - 2);

    return res;
}
int main()
{
    cout << "Enter n : ";
    int n;
    cin >> n;

    int ways = stair(n);
    cout << "N is : " << n << " result is " << ways << endl;
}