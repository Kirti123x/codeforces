#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 


void solve() {
    int n; cin>>n;
    vi a(n);
    
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    ll x;
    for(int i = 1; i<=60; i++){
        x = 1LL<<i;
        set<int>s;
        for(int j =0; j<n; j++){
            s.insert(a[j]%x);
        }
        if(s.size()==2){
            cout<<x<<endl;
            return;
        } 
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}