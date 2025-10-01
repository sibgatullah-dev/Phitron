#include<bits/stdc++.h>
using namespace std;
bool visit[100];
vector<int> adj_list[105];
int parent[105];
bool cycle; // flag variable

void bfs(int src){
    queue<int>q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child : adj_list[par]){
            if(visit[child] && parent[par]!= child ){ // checking if the child is the parent or not . if not parent but visited then there is a cycle. 
                cycle = true;
            }
            if(!visit[child]){
                q.push(child);
                visit[child] = true;
                parent[child] = par;
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
    memset(parent,-1,sizeof(parent));
    cycle = false;

    for(int i = 0; i<n;i++){ // since if some node can be disconnected so we are going to run the bfs on the visited array
        if(!visit[i]){ // if any node value in visit array is false we are going to run bfs there right then .
            bfs(i);
        }
    }

    if(cycle)
        cout<< "CYCLE\n";
    else cout<< "NO CYCLE\n";
    return 0;
}