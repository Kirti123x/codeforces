#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
	cin >> n;

	vector<ll> sec;
	ll smol = INT_MAX; 

	for (ll i = 0; i < n; i++){
		ll m;
		cin >> m; 
		vector<ll> a(m); 
		for (auto &x : a) cin >> x;
		sort(a.begin(), a.end());
		sec.push_back(a[1]); 
		smol = min(smol, a[0]); 
	}
	sort(sec.begin(), sec.end()); 

	ll sum = 0;
    for(ll i = 0; i<sec.size(); i++){
        sum+=sec[i];
    }
    ll sec_smol = sec[0]; 

	ll ans = smol + sum - sec_smol;
	cout << ans << endl;
    return;
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