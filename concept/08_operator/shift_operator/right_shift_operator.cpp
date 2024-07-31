#include <iostream>
#include <bitset>
using namespace std;

int main(){
    // Right Shift operator
    int a = 5; // 101
    int b= 1024;
    cout << (a>>1) << endl; // 2 : 10
    cout << (a>>2) << endl; // 1 : 1
    cout << (a>>3) << endl; // 0 : 0

    // To check Negative Shift
    short result = b >> 1;
    bitset<16> bitset0(result);
    cout << result << endl; // 512
    cout << bitset0 << endl; // 0b 00000010'00000000

    // To check Negative Shift
    short result2 = b >> 10;
    bitset<16> bitset3(result2);
    cout << result2 << endl; //1
    cout << bitset3 << endl; // 0b 00000000'00000001

     short neg1 = -16;
    bitset<16> bn1(neg1);
    cout << bn1 << endl;  // 0b11111111'11110000

    short neg2 = neg1 >> 1; // -8
    bitset<16> bn2(neg2);
    cout << bn2 << endl;  // 0b11111111'11111000


}