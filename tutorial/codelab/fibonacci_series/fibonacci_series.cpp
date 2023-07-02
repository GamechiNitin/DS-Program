#include <iostream>
using namespace std;

int main(){
    /*
    Fibonacci Series : Sum last two number is Next Digit.
    0   1   1   2   3   5   8   13  21  ...
    */

   int n;
   cout << "Enter the number :" << endl;
   cin >> n; 

   int a = 0;
   int b = 1;

    int c = 0; 
   for (int i = 0; i < n; i++){
     cout << c << " ";
     c= a + b ; // 1 : 0 | 1
     b= a; // 0 
     a =c; // 1   
   }
/*
   Rule : 1 - Print 0;
   Rule : 2 - Do a + b = c [0 + 1 = 1];
   Rule : 3 - b = a; [interchange  b = a]
   Rule : 4 - a = c; [interchange  a = c]
*/


}
