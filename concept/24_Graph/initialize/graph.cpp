#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>

class Graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // Direction = 0 -> Undirected
        // Direction = 1 -> directed graph

        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printADJList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number of nodes " << endl;
    cin >> n;
    int m;
    cout << "Enter the number of edges " << endl;
    cin >> m;

    /*

    0 1
    1 2
    2 3
    3 1
    3 4
    0 4

    op: 4->3, 0,
    3->2, 1, 4,
    2->1, 3,
    1->0, 2, 3,
    0->1, 4,
*/

    Graph<int> g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.printADJList();

    return 0;
}