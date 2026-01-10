#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
 
void solve() {
    int n;
    cin>>n; 
    string s; cin>>s;

    vector<int>dis(n);
    map<char,int>mpp, mpp1;
    int disi=0;

    for(int i=n-1;i>=0;i--){
        mpp[s[i]]++;
        if(mpp[s[i]]==1){
            disi++;
        }
        dis[i]=disi;
    }
    int dist=0, ans=0;

    for(int i=0;i<n-1;i++){
        mpp1[s[i]]++;
        
        if(mpp1[s[i]]==1) dist++;
        ans=max(ans, dist + dis[i+1]);
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--){
        solve();
    }   
}