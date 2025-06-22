#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1000;

    for (int i = 0; i < n; i*=2)//-- increasing by multiple which makes it logarithmic Complexity
    {
        cout<<i<<" ";
    }

    cout<<endl;

    for (int i = n; i >= 1; i/=3)//-- decrement by division which makes it logrithmic complexity
    {
        cout<<i<<" ";
    }

    cout<<endl;

    int k = 2;
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" ";
        i = i*k;//-- log N
                    //  k
    }
    
    
    
    return 0;
}