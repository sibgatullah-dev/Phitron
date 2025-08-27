#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visit[1005]; // if a node visit is false then we can asume that that node can't be visited

void bfs(int src){
    queue<int>q;
    q.push(src);
    visit[src] = true;
    
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent]){
            if(visit[child] == false){
                q.push(child);
                visit[child] = true;
            }
        }
    }
    

}

int main(){
    int n,e;cin>>n>>e;
    int source,destination;cin>>source>>destination;
    while (e--)
    {
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    bfs(source);

    if(visit[destination])cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}