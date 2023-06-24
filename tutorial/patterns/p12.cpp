#include <iostream>
using namespace std;

int main(){
    /* 
    A   B   C
    B   C   D
    C   D   E
    */
    int n;

    cin >> n;
    int i = 1;

    while (i <= n){
        int j = 1;
        while (j <= n){
            char ch = 'A' + i - 2 +j;
            cout << ch << " ";
            j++;

        }
        cout << endl;
        i++;
    }
    
}