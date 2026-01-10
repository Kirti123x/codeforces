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
    int n; cin>>n;
    vector<string> a(n);
    string res="" ;

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    res+=a[0];


    for(int i= 1; i<n;i++){
        string x = res+a[i];
        string y = a[i]+ res;
        res=min(x,y);
    }
    cout<<res<<endl;

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