#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    v.push_back(20);//-- pushing one element on the end of the array 
    for(int x:v){//-- short cut for loop when not working with index
        cout<<x<<" ";
    }
    cout<<endl;
    v.pop_back();//-- removing one element from  the end of the array
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,50);//-- inserting 50 in index 2 (position,value)
    for(int y:v){
        cout<<y<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2);//-- removing a single element from a single index
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1,v.begin()+5);//-- removing multiple elements from multiple index
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}