#include <iostream>
using namespace std;

int main(){

    /* 
     1
     2  1
     3  2   1   
     4  3   2   1
    */

    int n ;
    cin >> n;
    int i = 1;

    while (i<=n)
    {
     int   j = 1;
        while (j <= i){
            int value = i - j +1;
            cout << value << " ";
            j++;

        }
        cout << endl;
        i++;
        
    }
    
}