#include <iostream>
using namespace std;



int main(){

    int arr[6] = {54,56,7,25,5,89};

    for (int i = 0; i < 6; i=i+2){
        swap(arr[i],arr[i+1]);
    }

    for (int i = 0; i < 6; i++){
       cout<< arr[i] << " ";
    } 
}