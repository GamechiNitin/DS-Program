#include <iostream>
using namespace std;

void reverseString(string &temp, int s, int e)
{

    if (s > e)
    {
        return;
    }
    swap(temp[s++], temp[e--]);
    reverseString(temp, s, e);
}

int main()
{
    string s = "abcdef";

    reverseString(s, 0, 5);
    cout << "s is " << s << endl;
}