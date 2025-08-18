#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string ,int>mp;
    mp["rakib"] = 2; // O(logN)
    mp["sibgatullah"] = 5;
    mp["nasir"] = 8;

    cout<< mp["sibgatullah"]<<endl;

    for (auto it = mp.begin(); it != mp.end(); it++) // it is a pointer so we need to derefference it  O(NlogN)
    {
        cout<< it->first<< ' ' << it->second<<endl;// we need to derefference the it cause it's a pointer which i pointing the map values
    }
    

    if(mp.count("nasir")) cout<<"YES";
    return 0;
}