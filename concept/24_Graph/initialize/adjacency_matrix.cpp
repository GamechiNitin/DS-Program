#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int v;
    vector<vector<int>> adjMatrix;

public:
    Graph(int vertices)
    {
        v = vertices;
        adjMatrix.resize(v, vector<int>(v, 0));
    }

    // Add an edge (undirected graph)
    void addEdge(int u, int v)
    {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Since it's undirected
    }

    void printGraph()
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
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