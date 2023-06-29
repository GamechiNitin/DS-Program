#include <iostream>
using namespace std;

int main(){

    /*
                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1
    */
    int n;
    cin >> n;
    int i =1;

while (i<= n)
{
   int j = 1;
    int space = n - i;
    while (space){
       cout<< " ";
       space--;
    }

    while (j <= i)
    {
        cout << j;
        j++;
    }

    int start = i - 1;
    while (start)
    {
        cout << start;
        start--;
    }
    cout << endl;
    i++;
}

}