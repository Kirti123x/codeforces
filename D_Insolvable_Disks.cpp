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
    int n;
    cin>>n;
    vi a(n);

    int ans = 0;
    int range = -1, dif = -1;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(i>0){
            dif = a[i]-a[i-1];
            if(range != -1){
                
            }
            else{
                range = dif;
                ans++;
            } 
        }
    }

    

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