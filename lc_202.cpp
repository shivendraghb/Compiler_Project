#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    unordered_set<int> seen;
    auto getNext = [](int num) {
        int total = 0;
        while (num > 0) {
            int d = num % 10;
            total += d * d;
            num /= 10;
        }
        return total;
    };
    while (n != 1 && !seen.count(n)) {
        seen.insert(n);
        n = getNext(n);
    }
    cout << (n == 1 ? "true" : "false") << '\n';
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