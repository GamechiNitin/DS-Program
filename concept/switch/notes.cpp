#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int hcount = 0;
    int fcount = 0;
    int tcount = 0;
    int tencount = 0;
    int oneount = 0;

    switch (1){
    case 1:
        hcount = n/100;  
        count = count + hcount;    
        n = n%100;          
    case 2:
        fcount = n/50;           
        count = count + fcount;    
        n = n%50;          
    case 3:
        tcount = n/20;          
        count = count + tcount;    
        n = n%20;          
    case 4:
        tencount = n/10;              
        count = count + tencount;    
        n = n%10;          
    case 5:
        oneount = n/1;           
        count = count + oneount;    
        n = 0;          
        break;
    }

    cout << "No. of Notes : " << count << endl;
    cout << "No. of 100 Notes : " <<  hcount << endl;
    cout << "No. of 50 Notes : " <<  fcount<< endl;
    cout << "No. of 20 Notes : " <<  tcount<< endl;
    cout << "No. of 10 Notes : " <<  tencount << endl;
    cout << "No. of 1 Notes : " <<  oneount << endl;
    
}
