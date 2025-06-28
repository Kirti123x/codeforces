#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int a,x,y;
    cin>>a>>x>>y;
    int m = min(x,y);
    int n = max(x,y);
    if(a>m && a<n){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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