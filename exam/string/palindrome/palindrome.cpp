#include <iostream>
using namespace std;

bool isPalindrome(string dara)
{
    int start = 0;
    int end = dara.length() - 1;

    if (dara[start] != dara[end])
    {
        return false;
    }
    else
    {
        return true;
    }
}

void isLeastNewPalindrome(string res)
{
    if (!isPalindrome(res))
    {
        cout << "Not Possible " << endl;
    }
    else
    {
        for (int i = 0; i < res.length() - 1; i++)
        {
            if (res[i] != 'a')
            {
                res[i] = 'a';
                cout << res << endl;
                break;
            }
        }
        cout << "Not Possible " << endl;
    }
}

int main()
{
    string data = "MOM";
    string data1 = "MOMA";
    string data2 = "aaabbaaa";
    cout << isPalindrome(data) << endl;
    cout << isPalindrome(data1) << endl;
    isLeastNewPalindrome(data);
    isLeastNewPalindrome(data1);
    isLeastNewPalindrome(data2);
}