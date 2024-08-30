#include <iostream>
using namespace std;

int main()
{
    // Leet Code 1910
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << s << endl;
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    cout << s << endl;
    /*
    i/o : daabcbaabcbc
    o/p : dab
    */
}
