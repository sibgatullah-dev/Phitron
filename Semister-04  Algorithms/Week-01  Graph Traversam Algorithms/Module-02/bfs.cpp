#include<bits/stdc++.h>
using namespace std;
vector<int> adjl[1005]; // putting the vector in global so we can access it from every functions
bool visit[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);

    while (!q.empty())
    {
     int par = q.front();
     q.pop();

     cout<<par<<' ';

     for (int child : adjl[par])
     {
        q.push(child);
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
    
    bfs(0);
    return 0;
}