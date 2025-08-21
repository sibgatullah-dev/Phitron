#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> li(5,5);// 5 elements in this linked list which are all 5
    cout<<li.size()<<endl;
    cout<<*li.begin()<<endl;
    cout<<'\n'<<endl;
    for (auto i = li.begin(); i != li.end(); i++)
    {
        cout<<*i<<endl;
    }
    cout<<'\n'<<endl;
    list<int> a(li); // copying all the elements of the li list we can put array in it too . in that case we need to give array's starting and ending (a,a+n) we can put vector in it too
    for (int val:a)
    {
        cout<<val<<endl;
    }
    

    return 0; 
}