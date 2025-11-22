#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin>>n>>k;
    vector<pair<pair<int,int>, int>> v(n);
    for (auto& x : v) cin >> x.first.first >> x.first.second >> x.second;
    
    sort(v.begin(), v.end());
    int ans = k;

    for(auto& x:v){
        int l = x.first.first, r = x.first.second, t = x.second;
        if(l<=ans && r>=ans){
            ans = max(ans, t);
        }
    }
    cout<<ans<<endl;
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