#include<iostream>
#include<algorithm>
using namespace std;
int main(){ 
    int a,b;cin>>a>>b;
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    cout<<min({1,2,3,4,5,6,7,8,9})<<endl;
    cout<<max({1,2,3,4,5,6,7,8,9})<<endl;
    //Swap
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}