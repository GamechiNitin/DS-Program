#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {

        count++;
    }
    return count;
}
bool isPalindrome(char name[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        if (name[start] != name[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{

    char name[10];

    cout << "Enter your name" << endl;
    cin >> name;

    int length = getLength(name);

    cout << length << endl;
    cout << isPalindrome(name, length) << endl;
}
