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

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    if(k%2){
        for(int i = 0; i<n; i++){
            if(a[i]%2==1) a[i]+=k;
        }
    }
    else{
        int p;
        if(k==2){
            for(int i = 0; i<n; i++){
                if(a[i]%3==1){
                    a[i]+=2;
                }
                else if(a[i]%3==2){
                    a[i]+=4;
                }
            }
        } 
        else{
            for(int i = 0; i<n; i++){
                int p = k-1;
                int need = (p- (a[i]%p))%p;
                a[i]+=(k*need);
            }
        } 
    }       


    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}