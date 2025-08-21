#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val){
     v.push_back(val);
    int cur_index = v.size()-1;
    while (cur_index != 0)
    {
        int par_index = (cur_index-1)/2;
        if(v[par_index]< v[cur_index]){
            swap(v[par_index],v[cur_index]);
        }else{
            break;
        }
        cur_index = par_index;
    }
}

void delete_heap(vector<int>&v){
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while (true)
    { 
        int left_idx = (cur_idx*2)+1;
        int right_idx = (cur_idx*2)+2;
    
        int left_val,right_val;
    
        if(left_idx<v.size()){
            left_val = v[left_idx];
        }else{
            left_val = INT_MIN;
        }
        if(right_idx <v.size()){
            right_val = v[right_idx];
        }else{
            right_val = INT_MIN;
        }
    
        if(left_val > right_val && left_val > cur_idx){
            swap(v[left_idx],v[cur_idx]);
        }else if(left_val < right_val && right_val > cur_idx){
            swap(v[right_idx],v[cur_idx]);
        }else{
            break;
        }
    }
    
}

void print_heap(vector<int>v){
    for (int x:v)
    {
        cout<<x<<' ';
    }
}

int main(){
    vector<int> v;
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;cin>>val;
        insert_heap(v,val);
    }
    delete_heap(v);
    print_heap(v);
    
    return 0;
}