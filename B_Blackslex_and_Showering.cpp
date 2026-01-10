#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ln cout<<"\n"
#define nl cout << endl
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vii = vector<pii>;

// CONSTANTS
const int mod = 1e9 + 7;
const long long INF = 1e18;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

template <typename Iterable>
void print(const Iterable &container) {
    for (const auto &element : container) {
        cout << element << " ";
    }
}

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a%b;
        }
        else {
            b = b%a; 
        }
    }
    if(a == 0) return b;
    return a;
}

void solve(){
    int n; cin>>n;
    vi a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int k = 0, ans = 0, best = 0;
    vi v;

    for(int i = 0; i+1<n; i++){
        ans+=abs(a[i+1]-a[i]);
    }
    //cout<<ans<<" ";
    for(int i = 0; i < n; i++){
        if(i==0 && i+1<n){
            k = abs(a[i+1]-a[i]);
        }
        else if(i==n-1){
            k = abs(a[i-1]-a[i]);
        }
        else{
            k = abs(a[i+1]-a[i])+abs(a[i-1]-a[i]) - abs(a[i-1]-a[i+1]);
        }
        best = max(best , k);
    }
    cout<<ans-best<<endl;
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