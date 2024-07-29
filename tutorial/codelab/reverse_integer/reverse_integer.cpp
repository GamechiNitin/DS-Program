#include <iostream>
using namespace std;

int main(){
 /*
    Q : Reverse Integer
    Input : 321
    Output : 123

    Logic - Ans = (ans * 10) + digit
 */

int n;
cin >>n;

int ans = 0;
while(n%10 != 0){
    int digit = n%10;
    if((ans > INT_MAX/10)||(ans < INT_MIN/10)){
        return 0;
    }
    ans = (ans * 10) + digit;

    n = n/10;
    cout <<  digit << ' '<< ans << endl;
}
    cout <<  ans << endl;
    return 0;
}