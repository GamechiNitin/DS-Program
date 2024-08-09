#include <iostream>
#include <set>

using namespace std;

void deleteSets(set<int> a)
{
    // Delete
    cout << "\nDelete ---" << endl;
    a.erase(a.begin());
    for (int n : a)
    {
        cout << n << " ";
    }
    cout << endl;

    // Delete 2

    set<int>::iterator it = a.begin();

    it++;
    a.erase(it);
    for (int n : a)
    {
        cout << n << " ";
    }
    cout << endl;
}
void setInDecereasingOrder(set<int> a)
{
    std::set<int, greater<int>> s1;
    for (int n : a)
    {
        s1.insert(n);
    }
    for (int m : s1)
    {
        cout << m << " ";
    }
}
int main()
{
    /*
    Set is a collection of element of same data type.The values
    are stored in a specific sorted order either ascending or descending.

    Defaults is in Ascending order

    Time & Space complexity is O(N)
    Insertion of Elements – O(log N)
    Deletion of Elements – O(log N)

    Properties :
    Storing order – The set stores the elements in sorted order.
    Values Characteristics – All the elements in a set have unique values.
    Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
    Search Technique – Sets follow the Binary search tree implementation.
    Arranging order – The values in a set are unindexed.

    */

    set<int> a;

    a.insert(5);
    a.insert(4);
    a.insert(3);
    a.insert(2);
    a.insert(5);
    a.insert(4);
    a.insert(3);
    a.insert(9);

    for (int n : a)
    {
        cout << n << " ";
    }
    cout << endl;

    setInDecereasingOrder(a);
    cout << endl;

    cout << "9 is present or not : " << a.count(9) << endl;
    deleteSets(a);
}
