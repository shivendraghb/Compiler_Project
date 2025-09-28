#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    for (char c : t) freq[c]--;
    bool isAnagram = true;
    for (auto &p : freq) {
        if (p.second != 0) {
            isAnagram = false;
            break;
        }
    }
    cout << (isAnagram ? "true" : "false") << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}