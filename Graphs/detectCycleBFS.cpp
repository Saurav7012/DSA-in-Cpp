#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

bool cycleBFS(int node, vector<int>adj[], vector<bool>&visited)
{
    visited[node] = 1;
    queue<pair<int,int>>q;
    q.push({node,-1});

    while(!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

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

            visited[adj[node][j]] = 1;
            q.push({adj[node][j], node});
        }
    }

    return 0;
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
        adj[v].push_back(u);
    }

    vector<bool>visited(vertex,0);

    for(int i=0; i<vertex; i++)
    {
        if(!visited[i] && (cycleBFS(i, adj, visited)))
        {
            return 1;
        }
    }

    return 0;

}