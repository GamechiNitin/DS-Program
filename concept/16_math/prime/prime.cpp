#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int count = 0;
    int n = 40;
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i < prime.size(); i++)
    {
        if (prime[i])
        {

            cout << i << endl;
        }
    }

    cout << "Count is " << count << endl;
}