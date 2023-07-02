#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<5;i++){
        for (int j = i; j <= 5; j++){
        cout << i  << j << " ";
        }
    }
}
// O/p : 00 01 02 03 04 05 11 12 13 14 15 22 23 24 24 33 34 35 44 45