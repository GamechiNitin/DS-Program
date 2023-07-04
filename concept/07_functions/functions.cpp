#include <iostream>
using namespace std;

int power(int num1,int num2){
    int ans = 1;

    for ( int i = 1; i <=num2; i++){
        ans = ans * num1;
    }
    return ans;
}

int power2(){
    int a,b;
    cin >> a >>b;
    int ans = 1;

    for ( int i = 1; i <=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int  a,b;
    cin >> a >> b;
    
    // Another Function with Argument 
    int ans =  power(a,b);
    cout <<"Power is : "<< ans << endl;

    // Another Function with out Argument 
    int ans2 =  power2();
    cout <<"Power is : "<< ans2 << endl;
}
