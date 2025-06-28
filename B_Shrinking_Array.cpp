#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n), b(n-1);
    for(ll i = 0; i<n; i++) cin>>a[i];

    for(ll i = 0; i<n-1; i++){
        b[i] = (a[i+1]-a[i]);
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
}