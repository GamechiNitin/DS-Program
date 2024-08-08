#include <iostream>
#include <queue>

using namespace std;

int main()
{

     // Max heap
     priority_queue<int> maximum;
     // Min heap
     priority_queue<int, vector<int>, greater<int>> minimum;

     maximum.push(1);
     maximum.push(3);
     maximum.push(5);
     maximum.push(2);

     int n = maximum.size();
     for (int i = 0; i < n; i++)
     {
          cout << maximum.top() << " ";
          maximum.pop();
     }
     cout << endl;

     minimum.push(1);
     minimum.push(3);
     minimum.push(5);
     minimum.push(2);

     int m = minimum.size();
     for (int i = 0; i < m; i++)
     {
          cout << minimum.top() << " ";
          minimum.pop();
     }
     cout << endl;
}
