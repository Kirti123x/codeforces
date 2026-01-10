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
    vector<int> a(n);

    int sum = 0, neg = 0, m = INT_MAX;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]<0) neg++;

        a[i]=abs(a[i]);
        m = min(m, a[i]);
        sum += a[i];
    }
    if(neg%2==1) sum-=2*m;
    cout<<sum<<endl;
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