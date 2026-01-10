#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vii = vector<pii>;

// ----------- Shortcuts --------------
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
#define ln '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"


template <typename Iterable>
void print(const Iterable &arr) {
    for (const auto &ele : arr) {
        cout<<ele<<" ";
    }
}

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return (a == 0 ? b : a);
}

void solve() {
    int n, k; cin>>n>>k;
    vi c(n);

    int m = 1;
    for(int i = 0; i<n; i++){
        cin>>c[i];
        m = (m*c[i]/(gcd(m, c[i])))%k;
    } 
     
    if(m%k==0)yes;
    else no;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
    }
}