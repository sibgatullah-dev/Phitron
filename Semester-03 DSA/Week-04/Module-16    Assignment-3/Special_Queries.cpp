#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    queue<string> q;

    while (tc--) {
        int line;
        cin >> line;

        if (line == 0) {
            string name;
            cin >> name;
            q.push(name);
        } else if (line == 1) {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
