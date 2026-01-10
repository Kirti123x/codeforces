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
#define ln cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;


void solve() {
    int n, m; cin>>n>>m;

    int two = 0, five = 0;
    int x = n;
    while (n%2 == 0) {
        two++;
        n /= 2;
    }
    while (n%5 == 0) {
        five++;
        n /= 5;
    }
    n=x;
    int k, p=1;

    while(two>five && p*5<=m){
        p*=5;
        five++;
    }
    while(two<five && p*2<=m){
        p*=2;
        two++;
    }
    while(p*10<=m){
        p*=10;
    }

    k = (m/p)*p;
    cout<<n*k<<endl;

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