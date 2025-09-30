#include<bits/stdc++.h>
using namespace std;
bool visit[100];
vector<int> adj_list[105];

void bfs(int src){
    queue<int>q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child : adj_list[par]){
            if(!visit[child]){
                q.push(child);
                visit[child] = true;
            }
        }
    }
    
}

int main(){
    int n , edge;
    cin>>n>>edge;
    
    while(edge--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visit,false,sizeof(visit));

    for(int i = 0; i<n;i++){ // since if some node can be disconnected so we are going to run the bfs on the visited array
        if(!visit[i]){ // if any node value in visit array is false we are going to run bfs there right then .
            bfs(i);
        }
    }
    return 0;
}