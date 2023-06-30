#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b;
    cout << c;

 // o/p : b = 1; c = 3;  
}