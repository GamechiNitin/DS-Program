

#include <iostream>
using namespace std;

int saysDigit(int n)
{
    string arr[10] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };
    if (n % 10 == 0)
    {
        return n;
    }

    int digit = n % 10;
    n = n / 10;

    saysDigit(n);
    cout << arr[digit] << " ";

    return digit;
}

int main()
{

    cout << "Enter n : ";
    int n;
    cin >> n;

    saysDigit(n);
}