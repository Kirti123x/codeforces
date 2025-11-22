#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
        ll n;
		cin >> n;
		ll a; 
		vector<pair<ll, ll>> v;

		for (int i = 0; i < n; i++) {
			cin >> a;
			v.push_back({a, i});
		}

		vector<ll> pre(n), ans(n);
		sort(v.begin(), v.end()); 

		pre[0] = v[0].first;
		for (int i = 1; i < n; i++) { 
			pre[i] = pre[i - 1] + v[i].first;
		}

		for (int i = 0; i < n; i++) { 
			int j = i, found = i;

			while (j < n) {
				pair<ll, ll> temp = {pre[j], INT_MAX};
				ll idx = upper_bound(v.begin(), v.end(), temp) - v.begin();
				idx--;
				if (idx == j) {
					break;
				}
				found += idx - j;
				j = idx;
			}
			ans[v[i].second] = found;
		}

		for (int i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
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