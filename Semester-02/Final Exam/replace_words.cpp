#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); 
    
    for (int t = 0; t < tc; ++t) {
        string s, x;
        cin >> s >> x;

        string result;
        int s_len = s.length();
        int x_len = x.length();
        
        for (int i = 0; i < s_len; ) {
            if (i + x_len <= s_len && s.substr(i, x_len) == x) {
                result += '#';
                i += x_len;
            } else {
                result += s[i];
                i++;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}