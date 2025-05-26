#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    scanf("%d %d",&n,&k);
    int gun[n];

    for(int i=0;i<n;i++){
        scanf("%d",&gun[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          if(gun[i]>gun[j]){
              int temp=gun[j];
              gun[j]=gun[i];
              gun[i]=temp;
          }
        
        }
    }
    
    int l=0;
    int r=n-1;
    int cnt=0;
    while(l<r){
        if(gun[l]+gun[r]<=k){
            cnt++;
            l++;
            r--;
        }
        else{
            r--;
        }
        
    }
    printf("%d",cnt);
    return 0;
} 