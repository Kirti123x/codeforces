#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<pair<int,int>> b(n);

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        int m = 0;
        for(int j = 0; j<x; j++){
            int p;
            cin>>p;
            m = max(m, p-j+1);
        }
        b[i]= {m, x};
    }
    sort(b.begin(), b.end());
    int ans = b[0].first;
    int x = b[0].second;

    for(int i = 1; i<n; i++){
        ans = max(ans, b[i].first-x);
        x+=b[i].second;
    }
    cout<<ans<<endl;
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