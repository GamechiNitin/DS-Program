#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    char opera;
    cout << "Enter a : ";
    cin >> a; 
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter calculate to : ";
    cin >> opera;

    int result = 0;

    switch (opera)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    case '%':
        result = a % b;
        break;
    default:
        break;
    }

    cout << result << endl;


}