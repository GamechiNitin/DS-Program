#include <iostream>
using namespace std;

int find(string data)
{
    int opening = 0, closing = 0;

    for (char c : data)
    {
        if (c == 40)
        {
            opening++;
        }
        else
        {
            if (opening > 0)
            {
                opening--;
            }
            else
            {
                closing++;
            }
        }
    }

    return opening + closing;
}
int main()
{
    string data1 = "(()))";
    string data2 = "))((";

    cout << "Result 1 is " << find(data1) << endl;
    cout << "Result 2 is " << find(data2) << endl;
}
