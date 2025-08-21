#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    list<long long> L; 

    while (Q--) {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0) {
            L.push_front(V);
        }
        else if (X == 1) {
            L.push_back(V);
        }
        else if (X == 2) {
            if (V >= 0 && V < L.size()) {
                auto it = L.begin();
                advance(it, V);
                L.erase(it);
            }
        }

        // print from left to right.
        cout << "L -> ";
        for (auto it = L.begin(); it != L.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;

        // print from right to left.
        cout << "R -> ";
        for (auto rit = L.rbegin(); rit != L.rend(); ++rit) {
            cout << *rit << " ";
        }
        cout << endl;
    }

    return 0;
}
