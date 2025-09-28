#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;

    priority_queue<pair<int, int>> pq;
    for (auto& [num, count] : freq) {
        pq.push({count, num});
    }

    vector<int> res;
    for (int i = 0; i < k && !pq.empty(); ++i) {
        res.push_back(pq.top().second);
        pq.pop();
    }

    for (int x : res) cout << x << " ";
    cout << "\n";
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