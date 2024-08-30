#include <iostream>
using namespace std;

int main()
{
    // Reverse Word
    // ym eman si nitin
    string s = "my name is test nitin gamechi";
    int start = 0;

    for (int i = 0; i <= s.length(); i++)
    {

        if (s[i] == ' ' || s[i] == '\0' || i == s.length())
        {
            int end = i - 1;

            while (start <= end)
            {
                swap(s[start++], s[end--]);
            }

            start = i + 1;
        }
    }

    cout << s << endl;
}