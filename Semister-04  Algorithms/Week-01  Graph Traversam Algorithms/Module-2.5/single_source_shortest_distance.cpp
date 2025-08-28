// a graph can have two source or more so in this case we are saying that the problem is single source
// in this problem there will be a source node and a destination node 
#include<bits/stdc++.h>
using namespace std;

vector<int>adj_list[1005];
bool visit[1005];
int level[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child: adj_list[parent])
        {
            if(visit[child] == false){
                q.push(child);
                visit[child] = true;
                level[child] = level[parent] + 1;
            }
        }
        
    }
    

}

int mian(){
    int n,e;cin>>n>>e;
    while (e--)
    {
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    int s,d;cin>>s>>d;

    memset(visit,false,sizeof(visit));
    memset(level,-1,sizeof(level));
    bfs(s);

    for(int i = 0; i <n;i++){
        cout<<i<<'->'<<level[i]<<endl;
    }

    cout<< 'level of destination : '<< level[d]<<endl;

    return 0;
}