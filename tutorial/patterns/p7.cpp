#include <iostream>
using namespace std;

int main(){
    /* 
        1
        2   2
        3   3   3
        4   4   4   4
    */
    int n;
    cin >> n;
    int i = 1;

    while (i <= n){
            int j = 1;
            while (j <= i){
            cout<< i << " ";
            j++;

        }
        cout << endl;
        i++;
    }
}