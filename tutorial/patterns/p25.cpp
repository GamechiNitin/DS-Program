#include <iostream>
using namespace std;

int main(){
    /*
    1   2   3   4   5   5   4   3   2   1
    1   2   3   4   *   *   4   3   2   1
    1   2   3   *   *   *   *   3   2   1
    1   2   *   *   *   *   *   *   2   1
    1   *   *   *   *   *   *   *   *   1
    */

   int n;
   cin >> n;
   int i = 1;
   while (i<=n){
    
    // 1 Number Triangle
    int j = 1;
    while (j<= n -i + 1){
        cout << j;
        j++;
    }

    // 2 Star Triangle
    int star = i - 1;
    while (star)
    {
    cout << "*"; 
    star--;      
    }

    // 3 Star Triangle
    int plus = i - 1;
    while (plus)
    {
    cout << "*"; 
    plus--;      
    }

    // 4 Number Triangle

    int loop = n-i+1;
    int u = 1;
    while (u <= loop){
        cout << loop-u+1;
        u++;
    }
    
    
    
   
   

  
    cout<< endl;
    i++;
    
   }
   
}