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

template <typename Iterable>
void print(const Iterable &arr) {
    for (const auto &ele : arr) {
        cout<<ele<<" ";
    }
}


void solve() {
    int n; cin>>n;
    vi c(n),par(n), ans;
    int root;
    vvi adj(n);


    for(int i = 0; i<n; i++){
        cin>>par[i]>>c[i];
        if(par[i]==-1) root=i;
        else adj[par[i]-1].pb(i);
    }
    
    for(int i = 0; i<n; i++){
        if(i==root || c[i]==0){
            continue;
        } 
        else{
            bool is = true;
            for(int x:adj[i]){
                if(c[x]==0){
                    is = false;
                    break;
                }
            }
            if(is) ans.pb(i+1);
        }               
    }
    if(ans.empty())cout<<-1<<endl;
    else{
        for (int& x : ans) cout << x << " ";
        ln;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}


