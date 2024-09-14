#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int v, vector<int>adj[], vector<int>&ans)
{
    queue<int>q;
    vector<bool>visited(v,0);
    visited[0] = 1;
    q.push(0);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(int j=0; j<adj[node].size(); j++)
        {
            if(!visited[adj[node][j]])
            {
                visited[adj[node][j]] = 1;
                q.push(adj[node][j]);
            }
        }
    }
}

int main()
{
    int vertex, edges;

    cin>>vertex>>edges;

    vector<int>adj[vertex];

    int u,v;
    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>ans;

    BFS(vertex, adj, ans);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}