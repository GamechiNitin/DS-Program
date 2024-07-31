#include <iostream>
using namespace std;



void change(int arr[], int size){
     for (int i = 0; i < size; i=i+2){
        if( (i+1) < size ){
            swap(arr[i], arr[i+1]);
        }
    }

}
int main(){

    int even[6] = {54,56,7,25,5,89};
    int odd[5] = {4,6,7,2,5};

   change(even,6);
   change(odd,5);

    for (int i = 0; i < 6; i++){
       cout<< even[i] << " ";
    } 

       cout<< endl;
      for (int i = 0; i < 5; i++){
       cout<< odd[i] << " ";
    } 
}


