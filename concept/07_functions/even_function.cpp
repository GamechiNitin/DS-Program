#include <iostream>
using namespace std;

bool isEven(int n){
        // Odd
        if(n%2!=0){
           return 0;
        }
        return 1;
}

bool isEvenShift(int n){
        // Odd
        if(n&1){
           return 0;
        }
        return 1;
}

// Even = 1 Odd = 0

int main(){
    int n;
    cin >> n;

    bool isEvenAns = isEven(n);
    cout << "Answer is : "<< isEvenAns << endl;

    bool isEvenAns2 = isEvenShift(n);
    cout << "Answer 2 is : "<< isEvenAns2 << endl;

    if(isEvenAns2){
        cout << "Number is Even " << endl; 
    }else{
        cout << "Number is Odd " << endl; 
    }

}