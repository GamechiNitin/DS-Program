#include <iostream>
using namespace std;

int main()
{
    string s = "My name is max";
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {

            temp.push_back(s[i]);
        }
    }
    cout << temp << " ";
}