#include <iostream>
using namespace std;

bool isPalindrome(string s, int i, int end)
{

    if (i > end)
    {
        return true;
    }

    if (s[i] != s[end])
    {
        return false;
    }
    else
    {
        // i++;
        // end--;
        return isPalindrome(s, i + 1, end - 1);
    }
}

int main()
{
    string s = "MOM";

    bool is = isPalindrome(s, 0, s.length() - 1);

    if (is)
    {
        cout << "It's Palindrome" << endl;
    }
    else
    {
        cout << "It not Palindrome" << endl;
    }
}