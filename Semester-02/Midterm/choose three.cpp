//whill use brute-force cause nothin else is comming in my lazy mind 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc; 

    while (tc--) {
        int n, s;
        cin>>n>>s;

        int a[101];

        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        bool found = false;//using bollean as a flag 

        for (int i = 0; i < n - 2 && !found; i++) {
            for (int j = i + 1; j < n - 1 && !found; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (a[i]+a[j]+a[k]==s) {
                        found = true;
                        break;
                    }
                }
            }
        }

        if (found) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
