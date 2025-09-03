class Solution {
public:
    int cnt;
    bool visit[105][105];
    vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};

    int row,collumn;

    bool valid(int i, int j)
    {
        if(i<0 || i>= row || j < 0 || j>=collumn)
            return false;
        return true;
    }

    void dfs(int si,int sj,vector<vector<int>>& grid )
    {
        visit[si][sj] = true;
        for(int i = 0; i<4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if(valid(ci,cj)==false){
                cnt++;
            }
            else if(valid(ci,cj)==true && grid[ci][cj]== 0){
                cnt++;
            }
            else if(valid(ci,cj) && !visit[ci][cj] && grid[ci][cj]==1){
                dfs(ci,cj,grid);
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) 
    {
        cnt = 0;
        row = grid.size();
        collumn = grid[0].size();
        memset(visit,false,sizeof(visit));
        for(int i = 0; i < row; i++)
            for(int j = 0;j<collumn;j++)
                if(visit[i][j] == false && grid[i][j] == 1)
                    dfs(i,j,grid);

        return cnt;
    }
};