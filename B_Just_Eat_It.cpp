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
    vi a(n), prefix();
    int sum = 0;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    } 
    int cur = 0, maxcur = 0;
    for(int i = 0; i<n-1; i++){
        cur+=a[i];
        if(cur<0) cur=0;
        maxcur = max(maxcur, cur);
    }
    cur = 0;
    for(int i = 1; i<n; i++){
        cur+=a[i];
        if(cur<0) cur=0;
        maxcur = max(maxcur, cur);
    }
    if(maxcur<sum)yes;
    else no;
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