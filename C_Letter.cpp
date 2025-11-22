#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll; 

const int MOD = 1e9 + 7;

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    int upper = 0, lower = 0;

    for(int k = 0; k<n; k++){
        if(isupper(s[k])) upper++;
        else lower++;
    }
    int ans = 1e6;

    if(upper==0 || lower==0){
        cout<<0;
        return;
    }
    int a =0, b=0;

    for(int i = 0; i<n; i++){
         ans = min(ans, ((upper-a)+b));
        if(isupper(s[i])){
            a++;
        }
        else{
            b++;
        }
       
    }
    ans = min(ans, ((upper-a)+b));
    cout<<ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while (t--) {
        solve();
    }
}

