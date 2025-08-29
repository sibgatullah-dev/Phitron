#include<bits/stdc++.h>
using namespace std;
vector<int> adjl[1005]; // putting the vector in global so we can access it from every functions
bool visit[1005]; // to make sure if the node is already printed or not 

void bfs(int src){
    queue<int>q;
    q.push(src);
    visit[src] = true;

    while (!q.empty())
    {
     int par = q.front();
     q.pop();

     cout<<par<<' ';

     for (int child : adjl[par])
     {
        if(visit[child] == false){
            q.push(child);
            visit[child] = true;
        }
     }
     
    }
    
}

int main(){
    int n,e;
    cin >> n >> e;
    
    while (e--)
    {
        int a,b;cin>>a>>b;
        adjl[a].push_back(b);
        adjl[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    bfs(0);
    return 0;
}