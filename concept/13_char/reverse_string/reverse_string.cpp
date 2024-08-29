#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {

        count++;
    }
    return count;
}

int main()
{

    char name[10];

    cout << "Enter your name" << endl;
    cin >> name;

    // Null Character
    // name[2] = '\0';
    int len = getLength(name);
    cout << "Your name is " << name << endl;

    // Program 2 - Get Length of String
    cout << "Length is " << len << endl;

    // Program 2 - Reverse String
    reverse(name, len);
    cout << "Reverse is " << name << endl;
    return 0;
}