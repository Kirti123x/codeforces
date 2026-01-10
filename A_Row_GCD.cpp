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

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a%b;
        }
        else {
            b = b%a; 
        }
    }
    if(a == 0) return b;
    return a;
}

void solve() {
    int n, m;  cin>>n>>m;
    vi a(n), b(m), c(m);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    int g;
    if(n>1) g = a[1]-a[0];
    else g = -1;

    for(int i = 2; i<n; i++){
        g = gcd(a[i]-a[0], g);
    }

    for(int i = 0; i<m; i++){
        cin>>b[i];
        if(g==-1) c[i]=a[0]+b[i];
        else{
            c[i]=gcd(g, a[0]+b[i]);
        }
    }

    for(int i = 0; i<m; i++){
        cout<<c[i]<<" ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while (t--) {
        solve();
    }
}