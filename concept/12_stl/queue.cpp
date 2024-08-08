#include <iostream>
#include <queue>

using namespace std;

int main()
{

     queue<string> s;

     s.push("L");
     s.push("M");
     s.push("N");

     cout << endl
          << "TOP " << s.front() << endl;
     s.pop();
     cout
         << "TOP " << s.front() << endl;

     cout << "Empty " << s.empty() << endl;

     cout << endl
          << "Size Erase " << s.size() << endl;
}
