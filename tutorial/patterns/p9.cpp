#include <iostream>
using namespace std;

int main(){
    /* 
     1
     2  3
     3  4  5   
     4  5   6   7
    */
    int n ;
    cin >> n;
    int i = 1;

    while (i<=n)
    {
      int count = i;
      int  j = 1;
        while (j <= i){
            cout << count << " ";
            count = count + 1;
            j++;
        }
       cout << endl;
        i++;
    }
       cout << endl;

     int x = 1;
  while (x <= n) {
    int j = 1;
    while (j <= x) {
      int value = x + j - 1;
            cout << value << " ";

      j++;
    }
       cout << endl;
    x++;
  }
    
}