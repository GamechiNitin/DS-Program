#include <iostream>
#include <stack>

using namespace std;

int main()
{

     stack<string> s;

     s.push("L");
     s.push("M");
     s.push("N");

     cout << endl
          << "TOP " << s.top() << endl;
     s.pop();
     cout
         << "TOP " << s.top() << endl;

     cout << "Empty " << s.empty() << endl;

     cout << endl
          << "Size Erase " << s.size() << endl;
}
