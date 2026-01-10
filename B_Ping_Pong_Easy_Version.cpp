#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vii = vector<pii>;

// ----------- Shortcuts --------------
#define ln cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int a[111],b[111];
bool f[111];
int n = 0;

void dfs(int i){
    f[i] = true;
    for(int k = 1; k <= n;k++) {
        if(f[k]) continue;
        if((a[k]<a[i] && a[i]<b[k]) || (b[i]>a[k] && b[i]<b[k])) dfs(k);
    }
}
 
int k, m, x, y;
void solve() {
    cin >> m;
    if(m == 1) {
        n++;
        cin>>a[n]>>b[n];
    }
    if(m == 2){
        cin>>x>> y;
        memset(f,0,sizeof(f));
        dfs(x);
        if(f[y]) yes;
        else no;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(f,0,sizeof(f));
    while (t--) {
        solve();
    }
}