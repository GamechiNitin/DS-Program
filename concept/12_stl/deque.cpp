#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_back(3);
    d.push_front(5);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl
         << "Element at 1 index " << d.at(1) << endl;
    cout << endl
         << "Front " << d.front() << endl;
    cout << endl
         << "Back " << d.back() << endl;
    cout << endl
         << "EMpty " << d.empty() << endl;

    cout << endl
         << "Before Erase " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout << endl
         << "After Erase " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
}
