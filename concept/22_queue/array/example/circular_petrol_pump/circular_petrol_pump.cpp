#include <iostream>
#include <queue>
using namespace std;

struct petrolPump
{
    int pertrol;
    int distance;
};

int tour(petrolPump p[], int n)
{
    int balance = 0;
    int deficit = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        balance += p[i].pertrol - p[i].distance;
        // If balance is negative, reset starting index and balance
        if (balance < 0)
        {
            deficit += balance; // Accumulate the deficit
            start = i + 1;      // Update potential starting index
            balance = 0;        // Reset balance
        }
    }
    // If total petrol is enough to cover the total distance, return start index
    return (deficit + balance >= 0) ? start : -1;
}

int main()
{
    petrolPump pumps[] = {
        {4, 6}, // Petrol, Distance for pump 0
        {6, 5}, // Petrol, Distance for pump 1
        {7, 3}, // Petrol, Distance for pump 2
        {4, 5}  // Petrol, Distance for pump 3
    };
    int N = sizeof(pumps) / sizeof(pumps[0]);

    int result = tour(pumps, N);
    cout << result << endl;

    return 0;
}