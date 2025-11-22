#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];

    int cur = h[k - 1];  

    set<int> s;
    for(auto it:h){
        if(it>=cur) s.insert(it);
    }
    
    bool ans = true;
    int pre = cur;
    
    for(auto& it:s){
        if((it-pre)>cur) ans = false;
        pre = it;
    }

    if(ans) cout<<"YES\n";
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