#include <iostream>
using namespace std;

void unique(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans^arr[i];
        /* code */
    }
        cout<<ans<<" ";
    return;
}

int main(){


    /*
    Array of Lenth N.
    N = 2M+1 
    */


    cout<< "Unique number"<< endl;
   int arr[7] = {4,5,3,4,3};

   unique(arr,7);

   return 0 ;
    
}
