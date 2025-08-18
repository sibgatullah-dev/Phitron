#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        unordered_map<string,int> freq;

        string mostRepeated;
        int maxCount = 0;

        while (ss >> word) {
            freq[word]++;

            if (freq[word] > maxCount) {
                maxCount = freq[word];
                mostRepeated = word;
            }
        }

        cout << mostRepeated << " " << maxCount << "\n";
    }

    return 0;
}
