#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e16;

void solve(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int ans = 0;

    map<int,int> m;
    for(int i = 0; i<n; i++){
        m[a[i]]++;
    }

    for(auto it:m){
        int val = it.first;
        ans += max(0LL, m[val]-m[val-1]);
    }
    cout<<ans<<endl;
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}