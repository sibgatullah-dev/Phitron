#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,2,4,2,5,2};
    replace(v.begin(),v.end(),2,50);//-- starting ending value_to_replace value_to_be_replaced_with
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //-- find function works with iterator which means you can't find the index or work with index with it 
    vector<int>::iterator it = find(v.begin(),v.end(),50);//-- (vector<int>::iterator = auto) this indecator can be written by auto key word 
    if(it == v.end()){
        cout<<"NOT FOUND";
    }else{
        cout<<"FOUND";
    }
    return 0;
}