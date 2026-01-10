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
    int l,a,b;
    cin>>l>>a>>b;
    int ans = a;
    int x = __gcd(l,b);

    int k = (l-1-a)/x;
    ans = a+ (k*x);
    cout << ans<< '\n';
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