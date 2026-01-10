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

bool isprime(ll a){
    for(int i = 2; i*i<=a; i++){
        if(a%i==0) return false;
    }
    return true;
}
void solve() {
    int n;
    cin>>n;
    if(n==1){
        no; return;
    } 

    int a = (ll)sqrt(n);

    if(a*a != n){
        no; return;
    }
    if(isprime(a)){
        yes; return;
    }
    no;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while (t--) {
        solve();
    }
}