#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjlist;

    void addEdge(int u, int v, bool direction)
    {
        // Direction = 0 -> Undirected
        /// Direction = 1 -> Directed Graph

        adjlist[u].push_back(v);
        if (direction == 0)
        {
            adjlist[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adjlist)
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

void prepareAdjList(unordered_map<int, list<int>> &adj, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void bfs(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        // traver all neighbour of front node

        for (auto i : adj[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, list<int>> adj;
    vector<int> ans;
    unordered_map<int, bool> visited;
    prepareAdjList(adj, edges);

    // Travere all Componets of a graph

    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adj, visited, ans, i);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of nodes " << endl;
    cin >> n;
    int m;
    cout << "Enter the number of edges" << endl;
    cin >> m;

    Graph graph;
    vector<pair<int, int>> edges; // Store edges for BFS
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        graph.addEdge(u, v, 0);
        edges.push_back({u, v}); // Add to edges vector
    }

    graph.printAdjList();

    vector<int> v = BFS(n, edges); // Call BFS with vertex count and edges

    cout << "BFS Traversal Order: ";
    for (int node : v)
    {
        cout << node << " ";
    }
    cout << endl;

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

Time and space O(V+E)
   */
    return 0;
}