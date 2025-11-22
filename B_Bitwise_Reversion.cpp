#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int x, y, z; cin>>x>>y>>z;
    int m = x&y, n = y&z, p = z&x;
    if(m==n && n==p && p==m) cout<<"YES\n";
    else cout<<"NO\n";
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