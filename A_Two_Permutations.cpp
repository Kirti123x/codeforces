#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, a, b;
    cin>>n>>a>>b;
    if((a+b)<(n-1) || (a==b && a==n)){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
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