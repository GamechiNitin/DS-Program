#include <iostream>
using namespace std;

int main(){

    /*
    A A A A 
    B B B B 
    C C C C 
    D D D D 
    */

    int n ;
    cin >> n;
    int row = 0;

    while (row < n)
    {
       int column = 1;
        while (column <= n)
        {
            char ch = 'A' + row;
            cout << ch << " ";
            column++;
        }
        cout << endl; 
        row++;
        
    }
    
}