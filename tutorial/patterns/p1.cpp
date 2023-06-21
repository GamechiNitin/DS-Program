#include <iostream>
using namespace std;

int main(){
    /* Pattern 1 : 
        *   *   *
        *   *   * 
        *   *   *
    */
    int input;
    cin >> input;
     
    int i = 1;
    while (i <= input){
        int j = 1;
        while (j <= input){
            cout << "*" << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}