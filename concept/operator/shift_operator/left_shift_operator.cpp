#include <iostream>
#include <bitset>
using namespace std;

int main(){
    // Left Shift operator
    int a = 5; // 101
    int b= 16384;
    cout << (a<<1) << endl; // 10 : 1010
    cout << (a<<2) << endl; // 20 : 10100
    cout << (a<<3) << endl; // 40 : 101000

    // To check Negative Shift
    short result = b << 1;
    bitset<16> bitset0(result);
    cout << result << endl; // 16384 left-shifted by 1 = -32768
    cout << bitset0 << endl; // 0b 10000000'00000000

    // To check Negative Shift
    short result2 = b << 15;
    bitset<16> bitset3(result2);
    cout << result2 << endl; // 4 left-shifted by 15 = 0
    cout << bitset3 << endl; // 0b 00000000'00000000


}