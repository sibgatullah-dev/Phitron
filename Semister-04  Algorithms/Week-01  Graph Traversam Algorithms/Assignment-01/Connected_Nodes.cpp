#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

int main() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--) {
        int X;
        cin >> X;

        if (adj_list[X].empty()) {
            cout << -1 << "\n";
        } else {
            sort(adj_list[X].rbegin(), adj_list[X].rend());
            for (int node : adj_list[X]) {
                cout << node << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
