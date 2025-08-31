#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visit[1005];

int sum = 0;

void dfs(int src)
{
    sum += src;// sum of all nodes
    cout<< src<<" ";
    visit[src] = true;
    for(int child : adj_list[src]){
        if(!visit[child]){
            dfs(child);
        }
    }
}

int main(){
    int node,edge;cin>>node>>edge;
    while(edge--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    dfs(0);
    return 0; 
}

// use dfs when making normal traversal on a graph 
// use bfs when looking for shortest distance on a graph 