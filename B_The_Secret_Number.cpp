#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> ans;

    ll p = 1;
    for (int k = 1; k <= 18; k++) {
        p *= 10;
        ll d = p+1;
        if (d > n) break;
        if (n % d == 0) {
            ans.push_back(n/d);
        }
    }

    if (ans.empty()) {
        cout<<0<<endl;
    } else {
        sort(ans.begin(), ans.end());

        cout << ans.size() <<endl;

        for (auto v : ans) cout << v << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
