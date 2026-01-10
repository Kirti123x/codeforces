#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    string s;
    cin>>n>>s;
 
    int ans = 0;

    for(int i=0; i<n; i++){
        int ct = 0;
        while(s[i%(n)]=='0'){
            ct++;
            i++;
        }
        ans = max(ans,ct);
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--){
        solve();
    }   
}