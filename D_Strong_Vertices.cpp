#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vii = vector<pii>;

// ----------- Shortcuts --------------
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
#define ln '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"



void solve() {
    int n; cin>>n;
    vi a(n), b(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int m = LLONG_MIN;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        cin>>b[i];
        b[i]=a[i]-b[i];
        m = max(m, b[i]);
    }
    vi c;
    for(int i = 0; i<n; i++){
        if(b[i]==m){
            c.push_back(i+1);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i = 0; i<c.size(); i++) cout<<c[i]<<" ";
    cout<<ln;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
     cin >> t;
    while (t--) {
        solve();
    }
}