#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, p;
    cin>>n>>p;
    vector<int> a(n), b(n);

    for(int i = 0; i<n; i++)cin>>a[i];
    for(int i = 0; i<n; i++)cin>>b[i];

    vector<pair<int,int>> v;
    for (int i=0; i<n; i++) {
        v.push_back({b[i], a[i]});
    }

    sort(v.begin(), v.end());
        ll ans = p;
        ll already_shared = 1;

        for (auto it : v) {
            ll can_be_shared = it.second;
            ll cost = it.first;

            if (cost >= p) break;

            if (already_shared + can_be_shared > n) {
                ans += (n - already_shared) * cost;
                already_shared = n;
                break;
            } 
            else {
                ans += can_be_shared * cost;
                already_shared += can_be_shared;
            }
        }
        ans += (n - already_shared) * p; 
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