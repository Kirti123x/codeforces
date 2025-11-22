#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int ans = 0;

    for(int i = 30; i>=0; i--){
        int x = 0;
        int m = (1<<i);
        for(int j = 0; j<n; j++){
            if((a[j]&m) != 0)x++;
        }
        if(x<n && (x+k)>=n){
            k-=(n-x);
            ans+=m;
        }
        else if(x==n){
            ans+=m;
        }
    }
    cout<<ans<<"\n";
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