#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) return b;
    return a;
}

void solve() {
    int n;
    cin>>n;
    vi a(n), in(1001,-1);

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0; i<n; i++)  in[a[i]] = max(in[a[i]], i+1);

    int ans = -1;
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(__gcd(i,j) == 1 && in[i] != -1 && in[j] != -1){
                ans = max(ans,in[i]+in[j]);
            }
        }
    }
    cout<<ans<<endl;
    return;
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