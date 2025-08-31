#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

int main() {
    int n, e;
    cin >> n >> e;

    // Build directed graph
    while (e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b); // directed edge only
    }

    int q;
    cin >> q;

    while (q--) {
        int A, B;
        cin >> A >> B;

        if (A == B) { // node to itself is always YES
            cout << "YES\n";
            continue;
        }

        bool found = false;
        for (int child : adj_list[A]) {
            if (child == B) {
                found = true;
                break;
            }
        }

        if (found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
