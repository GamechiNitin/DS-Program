#include <iostream>
#include <vector>
#include <list>

class Graph
{
private:
    int V;                               // Number of vertices
    std::vector<std::list<int>> adjList; // Adjacency list

public:
    Graph(int vertices)
    {
        V = vertices;
        adjList.resize(V);
    }

    // Add an edge (undirected graph)
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Since it's undirected
    }

    // Print the adjacency list
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            std::cout << "Vertex " << i << ": ";
            for (int neighbor : adjList[i])
            {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    Graph g(5); // Create a graph with 5 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    g.printGraph();
    return 0;
}
