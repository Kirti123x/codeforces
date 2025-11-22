#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    if (n == 0) {
        cout << 0 << '\n';
        return;
    }

    ll minn = v[0];
    ll presum = v[0];
    ll ans = LLONG_MAX;
      
    for (int i = 1; i < n; i++) {
        minn = min(minn, v[i]);
        presum += minn;
        ans = min(ans, presum);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}