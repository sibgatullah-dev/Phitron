#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a= new int[10];//Dynamic array
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
        
    return 0;
}