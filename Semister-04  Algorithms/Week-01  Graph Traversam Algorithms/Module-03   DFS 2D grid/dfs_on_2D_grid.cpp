#include<bits/stdc++.h>
using namespace std; 

char grid[105][105];
bool visit[105][105];
vector<pair<int,int>>direction = {{-1,0},{1,0},{0,-1},{0,1}};


void dfs(int srow,int scol)
{
    cout<< grid[srow][scol]<<" ";
    visit[srow][scol] = true;
    for(int i = 0; i<4;i++){
        int crow,ccol;
        crow = srow + direction[i].first;
        ccol = scol + direction[i].second;
        cout<<crow<<" "<<ccol;
    }

}

int main(){
    int row,col;cin>>row>>col;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cin>> grid[i][j];
        }
        
    }

    int srow,scol;cin>>srow>>scol;
    dfs(srow,scol);

    return 0;
}