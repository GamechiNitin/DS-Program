#include <iostream>
using namespace std;

int main(){

    // For index loops
        cout << "For Index Loop : " ;
    for (int i = 1; i <=5; i++){
        cout << i << " ";
    }


    // For Each loops
   int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << endl <<"For Each Loop : ";
    for (int element : myNumbers) {
    cout << element << " ";
    }
}
