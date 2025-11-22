#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int ans = INT_MAX;
    int x;
    cin>>x;
    while(x>0){
        ans = min(ans, (x%10));
        x/=10;
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