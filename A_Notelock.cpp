#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n, k;
    cin>>n>>k;
    string s; cin>>s;
    int ans =0;
    vector<int> a;
    for(int i=0;i<n;i++){
        if(s[i]=='1') a.push_back(i);
    }
    for(int i =0;i<a.size();i++){
        if(i==0)ans++;
        else{
            if(a[i]-a[i-1]>=k){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}