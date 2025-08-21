#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,20,30,40};
    // This next() function is here for printing the spacific index node 
    cout<< *next(l.begin(),2)<<endl; // the next function is an iterator same as the tmp we used in manual nodes in double linked list

    l.insert(next(l.begin(),2),100);// The next() function is used as iterator to go to the designated index to insert 100

    for (int val : l)
    {
     cout<<val<<'\t';
    }
    
cout<<'\n'<<endl;
    list<int>a = {1,2,3,4,5};
    list<int>b = {10,20,30};

    a.insert(next(a.begin(),3),b.begin(),b.end());
    for (int val:a)
    {
        cout<<val<<'\t';
    }
    

    return 0;
}