#include <iostream>
using namespace std;

void printingArray(int arr[],int size){
    cout<<"\n----------------- Traversal  ---------------" << endl;

    for (int i = 0; i < size; i++)    {  
    cout<< arr[i] << " ";
    }
}


int main(){

    // Initilize
    int numbers[5]={5,45,85,64,78};

    // Accessing 
    printingArray(numbers,5);
    int value = numbers[2];
    cout<<"\n----------------- Accessing ---------------" << endl;
    cout<<"Index 2 value is " <<numbers[2] << endl;

    // Updation : Modifiying 
    numbers[1] = 10; 
    cout<<"----------------- Updation ---------------" << endl;
    cout<<"Modifidied Index 1 value is " <<numbers[1] << endl;
    return 0;
}