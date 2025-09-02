#include<bits/stdc++.h>
using namespace std; 

int row,col;
char grid[105][105];
bool visit[105][105];            // UP   DOWN  LEFT   RIGHT
vector<pair<int,int>>direction = {{-1,0},{1,0},{0,-1},{0,1}}; 

bool valid(int r, int c){
    if(r<0||r>=row||c<0||c>= col)
        return false;

    return true;
}

void dfs(int srow,int scol)
{
    cout << srow << " " << scol <<endl;
    visit[srow][scol] = true;
    for(int i = 0; i<4;i++){
        int crow,ccol; // children row and collumn 
        crow = srow + direction[i].first;
        ccol = scol + direction[i].second;
        if(valid(crow,ccol) == true && !visit[crow][ccol])
            dfs(crow,ccol);
    }

}

int main(){
    cin>>row>>col;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cin>> grid[i][j];
        }
        
    }

    int srow,scol;cin>>srow>>scol; // source node row and collumn 
    memset(visit,false,sizeof(visit));
    dfs(srow,scol);

    return 0;
}