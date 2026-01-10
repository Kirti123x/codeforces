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
    int n, m; cin>>n>>m;
    vi a(n), fre(m, 0);

    for(int i = 0; i<n; i++){
        cin>>a[i];
        fre[a[i]%m]++;
    }
    int ans =0;
    if(fre[0]) ans++;

    for(int i = 1; i<(m+1)/2; i++){
        int l = max(fre[i], fre[m-i]), s = min(fre[i], fre[m-i]);

        ans+=(l-s);
        if(l==s && s>0) ans++;      
    }

    if(m%2==0 && fre[m/2]) ans+=1;
    cout<<ans<<endl;
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