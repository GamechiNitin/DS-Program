#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "India";
    m[2] = "US";
    m[32] = "Canada";

    m.insert(
        {7, "UK"});

    for (auto a : m)
    {
        cout << a.first << " " << a.second << endl;
    }

    cout << "32 is present or not : " << m.count(32) << endl;
    cout << "8 is present or not : " << m.count(8) << endl;

    m.insert({10, "SA"});
    cout << "---------------" << endl;
    cout << "Before Erase " << endl;

    for (auto a : m)
    {
        cout << a.first << " " << a.second << endl;
    }

    m.erase(32);

    cout << "---------------" << endl;
    cout << "After Erase " << endl;

    for (auto a : m)
    {
        cout << a.first << " " << a.second << endl;
    }
    cout << "---------------" << endl;

    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        /* code */
        cout << (*i).first << endl;
    }
}