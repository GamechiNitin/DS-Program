#include <iostream>
using namespace std;
 
int main() {
     
    // for loop Ex.
    cout << "For loop : ";
    for(int i = 0; i < 5; i++) {
        cout << i << " ";
    }

    cout << endl;
     
    // While loop Ex.
    cout << "While loop : ";
    int j = 0;
    while(j < 5) {
        cout << j << " ";
        j++;
    }
     
    cout << endl;
    // do-while loop Ex.
    cout << "Do-while loop : ";
    int k = 0;
    do {
        cout << k << " ";
        k++;
    } while(k < 5);
     
    return 0;
}