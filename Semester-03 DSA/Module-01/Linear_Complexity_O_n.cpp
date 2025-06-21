#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;//-- O(1)
    cin>>n;//-- O(1)

    for (int i = 0; i < n; i++)//-- O(n)
    {
        cout<<n<<" ";
    }

    for (int i = 0; i < n; i++)//-- O(n)
    {
        cout<<n<<" ";
    }
    
    return 0;//-- O(1)
}
//----------------------------------------------------------------------------------
//          O(n+n+3) = O(2n) = O(n)       the +3 is ignored as constant and the 2 of 2n is also ignored as constant 

/* Rules of calculating the time complexity
    1. Always take the worst case
    2. Ignore the constant 
*/