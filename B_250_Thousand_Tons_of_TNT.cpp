#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
	cin >> n;
	vector<ll> v(n);
	for (auto &it : v) cin >> it; 

	vector<ll> pre(n);
	pre[0] = v[0];
	for (ll i = 1; i < n; i++) { 
		pre[i] = v[i] + pre[i - 1];
	}

	ll ans = 0; 
    vector<int> b;
    b.push_back(1);

    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            b.push_back(i);
            if(i*i != n) b.push_back(n/i);
        }
    }

	for (int k:b) {
		ll start = k - 1; 
		ll res = 0;
		ll maxi = pre[start]; 
		ll mini = pre[start]; 
		for (ll idx = start + k; idx < n; idx += k) { 
			ll curr = pre[idx] - pre[idx - k];
			maxi = max(maxi, curr); 
			mini = min(mini, curr); 
		}
		ans = max(ans, maxi - mini); 
	}
	cout << ans << endl; 
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