#include <iostream>
#include <vector>
using namespace std;

bool cycleDFS(int node, int parent, vector<int>adj[], vector<bool>&visited)
{
    visited[node] = 1;

    for(int j=0; j<adj[node].size(); j++)
    {
        if(parent == adj[node][j])
        {
            continue;
        }

        if(visited[adj[node][j]])
        {
            return 1;
        }

        if(cycleDFS(adj[node][j], node, adj, visited))
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int vertex, edges;
    cin>>vertex>>edges;
    int u,v;

    vector<int> adj[vertex];

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool>visited(vertex,0);

    for(int i=0; i<vertex; i++)
    {
        if(!visited[i])
        {
            if(cycleDFS(i, -1, adj, visited))
            {
                return 1;
            }
        }
    }

    return 0;
}