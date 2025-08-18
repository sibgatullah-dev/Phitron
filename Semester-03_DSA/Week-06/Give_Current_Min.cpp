#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int tc;cin >> tc;

    while (tc--) {
        int type;
        cin >> type;

        if (type == 0) { 
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << "\n";
        } 
        else if (type == 1) { 
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top() << "\n";
        } 
        else if (type == 2) { 
            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                pq.pop();
                if (pq.empty())
                    cout << "Empty\n";
                else
                    cout << pq.top() << "\n";
            }
        }
    }

    return 0;
}
