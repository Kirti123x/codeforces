#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 

vector<int> f(vector<int> &arr) {
	vector<pair<int, int>> tmp(arr.size());
	for (int i = 0; i < tmp.size(); i++) { 
		tmp[i].first = arr[i];
		tmp[i].second = i;
	}
	sort(tmp.rbegin(), tmp.rend()); 
	vector<int> ans(3);
	for (int i = 0; i < 3; i++)
		ans[i] = tmp[i].second;
	return ans;
}

void solve() {
    int n; cin>>n;
    vi a(n), b(n), c(n);
    
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    for(int i = 0; i<n; i++){
        cin>>c[i];
    }
    vi m1 = f(a);
    vi m2 = f(b);
    vi m3 = f(c);
    
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int x = m1[i], y = m2[j], z = m3[k];

                if ((x == y) || (y == z) || (z == x)) continue;
                ans = max(ans, a[x] + b[y] + c[z]); 
            }
        }
    } 
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}