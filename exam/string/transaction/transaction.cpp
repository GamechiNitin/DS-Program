#include <iostream>
#include <vector>
using namespace std;

vector<string> transactionSafe(vector<string> logs, int thersold)
{
    int arr[20] = {0};
    vector<string> ansLogs;

    for (string s : logs)
    {
        int index = s[0] - '0';

        arr[index] = arr[index] + 1;
        int index1 = s[2] - '0';
        arr[index1] = arr[index1] + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= thersold)
        {
            ansLogs.push_back(to_string(i));
        }
    }

    return ansLogs;
}
int main()
{

    vector<string> logs = {
        "1 2 50",
        "1 7 70",
        "1 3 20",
        "2 2 17",
    };
    int thersold = 2;

    vector<string> ans = transactionSafe(logs, 2);

    for (string s : ans)
    {
        cout << s << endl;
    }
}