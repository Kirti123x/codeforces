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


int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return (a == 0 ? b : a);
}

void solve() {
    int n, k; cin>>n>>k;
    if(n%2==1){
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
    }
    else{
        if(n%4==2) cout<<2<<" "<<(n)/2-1<<" "<<(n)/2-1<<endl;
        else cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
    }
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