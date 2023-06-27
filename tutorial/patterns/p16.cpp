#include <iostream>
using namespace std;

int main(){

    /* 
    D
    C   D
    B   C   D
    A   B   C   D
    */

    int n ;
    cin >> n;
    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while(j <= i){
            char ch = 'A' + n - i + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}