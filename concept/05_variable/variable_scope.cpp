#include<iostream>
using namespace std;

int main(){
    // Gobal Scope
    int a = 3;
    cout << a << endl;

    if(true){
    // Local Scope
    int a = 5;
    cout<< a << endl;
    }

    // For loop scope
    int i = 7;
    for (; i < 8; i++){
    cout << i << endl;
    }

    // Nested Scope
    int b = 1;
    if(1){
        int b;
        if(1){
        int b;
        if(1){
                cout << b << endl;
        }
        }
    }
    
}