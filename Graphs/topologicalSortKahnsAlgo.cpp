#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//for topological sort graph should be directed and acyclic

void BFS(int v, vector<int>adj[], vector<int>&indegree, vector<int>&ans)
{
    queue<int>q;

    for(int i=0; i<v; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }    

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(int j=0; j<adj[node].size(); j++)
        {
            indegree[adj[node][j]]--;

            if(!indegree[adj[node][j]])
            {
                q.push(adj[node][j]);
            }
        }
    }
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

    vector<int>indegree(vertex,0);
    vector<int>ans;

    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<adj[i].size(); j++)
        {
            indegree[adj[i][j]]++;
        }
    }

    BFS(vertex, adj, indegree, ans);

    for(auto i=ans.begin(); i!=ans.end(); i++)
    {
        cout<<*i<<" ";
    }

}