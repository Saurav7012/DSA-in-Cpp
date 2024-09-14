#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<int>adj[], vector<int>&ans, vector<bool>&visited)
{
    visited[node] = 1;
    ans.push_back(node);

    for(int j=0; j<adj[node].size(); j++)
    {
        if(!visited[adj[node][j]])
        {
            DFS(adj[node][j], adj, ans, visited);
        }
    }
}

int main()
{
    int vertex, edges;
    int u,v;

    cin>>vertex>>edges;
    vector<int>adj[vertex];

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>ans;
    vector<bool>visited(vertex, 0);

    DFS(0, adj, ans, visited);

    for(auto i=ans.begin(); i!=ans.end(); i++)
    {
        cout<<*i<<" ";
    }
}