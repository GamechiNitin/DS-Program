#include <iostream>
using namespace std;

string getMax(string s)
{
    string alph = "";
    int arr[26] = {0};
    int answer = 0;
    int maxi = -1;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
        if (maxi < arr[i])
        {
            maxi = arr[i];
            answer = i;
        }
    }
    cout << endl;

    alph = 'a' + answer;
    return alph;
}

int main()
{
    string s;
    cin >> s;

    cout << getMax(s) << endl;

    return 0;
}