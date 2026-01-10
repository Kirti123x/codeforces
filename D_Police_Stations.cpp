// starting dfs from police cities will mark every city with dis <=d to nearest police city and 
// will also mark the roads connected them
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define pb push_back
#define sz(x) (int)(x.size())

void solve(){
    int n, k, d;    cin>>n>>k>>d;
    vector<vector<int>> adj(n);
    vector<int> dist(n, -1);
    queue<int> q;
    map<pair<int, int>, int> ind;
    vector<bool> vis(n, 0);

    for(int i = 0; i < k; i++){
        int x;  cin >> x;
        x--;
        dist[x] = 0;
        q.push(x);
    }   
    for (int i = 1; i <= n-1; i++){
        int u, v;   cin>>u>>v;
        u--, v--;
        adj[u].pb(v);
        adj[v].pb(u);
        if (u > v) swap(u, v);
        ind[{u, v}] = i;
    }      
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for (int y : adj[x]){
            if (dist[y] == -1 && dist[x] < d){
                int a = x, b = y;
                if(a > b) swap(a, b);
                int id = ind[{a, b}];

                vis[id] = 1;
                dist[y] = dist[x] + 1;
                q.push(y);
            }
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n - 1; i++)
        if (!vis[i]) ans.pb(i);

    cout << sz(ans) << endl;
    for (int x : ans)
        cout << x << " ";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
