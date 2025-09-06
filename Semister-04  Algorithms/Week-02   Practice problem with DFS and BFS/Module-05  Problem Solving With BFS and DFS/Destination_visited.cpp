class Solution {
public:
    vector<int> adj_list[200005];
    bool visit[200005];

   void dfs(int src){
        visit[src] = true;
        for(int child: adj_list[src]){
            if(!visit[child]){
                dfs(child);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i = 0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        memset(visit,false,sizeof(visit));
        dfs(source);
        if(visit[destination]==true)
            return true;
        else return false;
    }
};