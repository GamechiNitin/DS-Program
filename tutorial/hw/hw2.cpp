#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    if(a-- > 0 && ++b > 2){
        cout << "S1 : Inside if Condition"<< endl;
    }
    else {
        cout << "S1 : Inside if Condition";
    }
        cout << a << " " << b << endl;
 // o/p : If condition : a = 0; b = 3;  
}