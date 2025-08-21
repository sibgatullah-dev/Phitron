#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    int adf_mat [n][n];

    memset(adf_mat,0,sizeof(adf_mat)); // memset() will turn every value in size of matrix 0 

    for(int i = 0; i<e;i++){

        int a,b;
        cin>>a>>b;
        adf_mat[a][b] = 1;
        adf_mat[b][a] = 1;
    }

    for(int i = 0; i < n;i++){
        for(int j = 0; j<n; j++){
            if(adf_mat[i]==adf_mat[j]){
                adf_mat[i][j] = 1;
            }
            cout<<adf_mat[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}