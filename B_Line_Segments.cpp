#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    vector<ll> arr(n);
    ll sum = 0, max_len = 0;

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        max_len = max(max_len, arr[i]);
    }

    ll dis = (c - a) * (c - a) + (d - b) * (d - b);
    ll l = max(2*max_len-sum, 0LL);

    if(dis> sum*sum || dis< l*l){
        cout << "No\n";
        return;
    }
    cout<<"Yes\n";
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
