#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    bool is = true;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]<0){
            is = false;
        } 
    } 
    if(is) cout<<"YES\n";
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