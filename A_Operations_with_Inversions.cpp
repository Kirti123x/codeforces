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
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++)cin>>a[i];
    int x = a[0];
    int ans = 0;
    for(int i = 1; i<n; i++){
        if(a[i]>=x)x=a[i];
        else ans++;
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