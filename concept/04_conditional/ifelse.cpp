#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter First value :" << endl;
    cin>>a;

    cout << "Enter Second value :" << endl;
    cin>>b;

    if(a > b){
        cout<< "A is Greater" << endl;
    }else{
        cout<< "B is Greater" << endl;
    }

  int marks = 32;
    // Nested if
  if (marks >= 33) {
    cout<< "You have passed the Exam" << endl;
  } else if (marks < 33) {
    cout<< "You have failed the Exam" << endl;
  } else {
    cout<< "Result not available" << endl;
  }
}
