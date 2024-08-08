#include <iostream>
#include <list>

using namespace std;

int main()
{

     list<int> l;

     l.push_back(1);
     l.push_back(3);
     l.push_front(5);

     for (int i : l)
     {
          cout << i << " ";
     }
     cout << endl;

     l.pop_back();

     for (int i : l)
     {
          cout << i << " ";
     }
     // cout << endl
     //      << "Element at 1 index " << l.at(1) << endl;
     cout << endl
          << "Front " << l.front() << endl;
     cout << endl
          << "Back " << l.back() << endl;
     cout << endl
          << "EMpty " << l.empty() << endl;

     cout << endl
          << "Before Erase " << l.size() << endl;

     l.erase(l.begin());
     cout << endl
          << "After Erase " << l.size() << endl;

     for (int i : l)
     {
          cout << i << " ";
     }

     list<int> n(5, 107);
     cout << endl;

     for (int m : n)
     {
          cout << m << " ";
     }
}
