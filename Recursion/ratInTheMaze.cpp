#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool valid(int i, int j, int N)
{
    return i>=0 && j>=0 && i<N && j<N;
}

void total(vector<vector<int> >&matrix, int i, int j, int N, string &path, vector<string>&ans, vector<vector<bool> >&visited)
{
    if(i==N-1 && j==N-1)
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;

    int row[] = {-1, 1, 0, 0};
    int col[] = {0, 0, -1, 1};
    string dir = "UDLR";

    for(int k=0; k<4; k++)
    {
        if(valid(i+row[k],j+col[k],N) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]])
        {
            path.push_back(dir[k]);
            total(matrix, i+row[k], j+col[k], N, path, ans, visited);
            path.pop_back();
        }
    }
    visited[i][j] = 0;
}

int main(){

    int N;
    cout<<"Enter number of rows and cols : ";
    cin>>N;

    vector<vector<int> >matrix(N, vector<int>(N));
    vector<vector<bool> >visited(N, vector<bool>(N,0));
    vector<string>ans;
    string path;

    cout<<"Enter matrix below. "<<endl;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>matrix[i][j];
        }
    }

    if(matrix[0][0]==0 || matrix[N-1][N-1]==0)
    {
        cout<<"Answer not possible."<<endl;
    }

    total(matrix, 0, 0, N, path, ans, visited);

    cout<<"Possible ways to reach the end positions are given below."<<endl;

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}