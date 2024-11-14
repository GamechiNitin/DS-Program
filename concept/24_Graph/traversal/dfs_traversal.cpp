#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // Direction = 0 -> Undirected
        // Direction = 1 -> directed

        adjList[u].push_back(v);
        if (direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adjList)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
void dfs(unordered_map<int, list<int>> &adj,
         unordered_map<int, bool> &visited,
         vector<int> &component, int node)
{
    component.push_back(node);
    visited[node] = true;

    for (auto i : adj[node])
    {
        if (!visited[i])
        {

            dfs(adj, visited, component, i);
        }
    }
}
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

vector<vector<int>> DFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, list<int>> adj;
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adj, edges);

    // Travere all Componets of a graph

    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(adj, visited, component, i);
            ans.push_back(component);
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
    vector<pair<int, int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        graph.addEdge(u, v, 0); // 0 direction
        edges.push_back({u, v});
    }

    graph.printAdjList();

    // Get all connected components from DFS
    vector<vector<int>> components = DFS(n, edges);

    cout << "DFS Traversal Order (All Connected Components): " << endl;
    for (auto &component : components)
    {
        for (int node : component)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    return 0;
}