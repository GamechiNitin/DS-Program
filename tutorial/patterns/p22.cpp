#include <iostream>
using namespace std;

int main(){
    /*
        1   2   3   4
            2   3   4
                3   3
                    4
    */
    int n;
    cin >> n;
    int i =1;

    while (i<= n){

        int j = 1;
        int space = i-1;

        while (space){
            cout << " ";
            space--;
        }

        while (j <= n-i+1){
            cout << i+j -1;
            j++;
        }
        cout << endl;
        i++;
    }
    
}