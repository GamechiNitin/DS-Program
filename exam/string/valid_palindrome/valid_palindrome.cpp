#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch == '0' && ch == '9'))
    {
        return ch;
    }
    char temp = ch - 'A' + 'a';
    return temp;
}

bool isValidChar(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z') || (ch == '0' && ch == '9'))
    {
        return 1;
    }
    return 0;
}

bool isPalindrome(string name)
{

    int s = 0;
    int e = name.length() - 1;

    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return true;
}

string validString(string name)
{
    string temp = "";
    for (int i = 0; i < name.length(); i++)
    {
        if (isValidChar(name[i]))
        {
            temp.push_back(toLowerCase(name[i]));
        }
    }

    cout << temp << endl;

    return temp;
}

int main()
{

    // Leet Code : 125
    string name = "A man, a plan, a camel: Panama";
    string name2 = "A man, a plan, a canal: Panama";

    cout << isPalindrome((validString(name))) << endl;
    cout << isPalindrome((validString(name2))) << endl;

    return 0;
}