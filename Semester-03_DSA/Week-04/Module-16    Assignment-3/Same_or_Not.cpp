#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> a;
    queue<int> b;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        a.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        b.push(val);
    }

    if (n != m) {
        cout << "NO";
        return 0;
    }

    bool same = true;

    while (!a.empty() && !b.empty()) {
        if (a.top() != b.front()) {
            same = false;
            break;
        }
        a.pop();
        b.pop();
    }

    if (same)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
