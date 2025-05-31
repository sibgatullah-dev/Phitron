#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    while (getline(cin, a)) {
        string s = "";
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != ' ') {
                s += a[i];
            }
        }
        
        sort(s.begin(), s.end());

        cout << s << endl;
    }
    return 0;
}