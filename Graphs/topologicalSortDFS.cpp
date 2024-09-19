#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void topoDFS(int node, vector<int>adj[], vector<bool>&visited, stack<int>&s)
{
    visited[node] = 1;

    for(int j=0; j<adj[node].size(); j++)
    {
        if(!visited[adj[node][j]])
        {
            topoDFS(adj[node][j], adj, visited, s);
        }
    }

    s.push(node);
}

int main()
{
    int vertex, edges;
    cin>>vertex>>edges;
    int u,v;

    vector<int>adj[vertex];

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }

    vector<bool>visited(vertex, 0);
    stack<int>s;

    for(int i=0; i<vertex; i++)
    {
        if(!visited[i])
        {
            topoDFS(i, adj, visited, s);
        }
    }

    vector<int>ans;

    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    for(auto i=ans.begin(); i!=ans.end(); i++)
    {
        cout<<*i<<" ";
    }

    
}