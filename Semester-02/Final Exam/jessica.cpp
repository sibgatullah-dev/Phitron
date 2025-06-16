#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;
    bool found = false;

    while (ss >> word) {
        if (word == "Jessica") {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

