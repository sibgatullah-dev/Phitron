#include<stdio.h>
void odd_even(){

    int n;scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0 || a[i]==0)
        {
            even++;
        }
        else if (a[i]%2!=0)
        {
            odd++;
        }
        
    }
    
    printf("%d %d",even,odd);
}
int main(){
    odd_even();
    return 0;
}