#include<bits/stdc++.h>
using namespace std;
bool visit[100];
vector<int> adj_list[105];
int parent[105];
bool cycle; // flag variable

void dfs(int src)
{
   visit[src] = true;
   for(int child : adj_list[src])
   {
    if(visit[child] && parent[src]!= child ){ // checking if the child is the parent or not . if not parent but visited then there is a cycle. 
        cycle = true;
    }
    if(!visit[child])
    {
        parent[child] = src;// parent needs to be updated before calling the recursion 
        dfs(child);
    }
   }
}

int main(){
    int node, edge;
    cin>>node>>edge;
    
    while(edge--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visit,false,sizeof(visit));
    memset(parent,-1,sizeof(parent));
    cycle = false;

    for(int i = 0; i<node;i++){ // since if some node can be disconnected so we are going to run the bfs on the visited array
        if(!visit[i]){ // if any node value in visit array is false we are going to run bfs there right then .
            dfs(i);
        }
    }

    if(cycle)
        cout<< "CYCLE\n";
    else cout<< "NO CYCLE\n";
    return 0;
}