#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int j;cin>>j;
    int* arr = new int[j];

    for (int i = 1; i <=sqrt(n); i++)
    {
        if(n%i==0){
            cin>>arr[i]>>arr[n/i];
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    
    return 0;
}

//-- The code didn't worked for input and array size problem . the problem is on line 11 a[n/i] which gives out of bound situations