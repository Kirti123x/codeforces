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
    int m = (1<<n)-1;

    int hold = m;
    set<int> s;
    
    int a = n;
    
    while (hold>0){   
        cout<<hold<<" ";
        s.insert(hold);
        for(int i=0;i<m;i++){
            if(__builtin_popcountll((hold&i))==a && s.find(i)==s.end()){
                cout<<i<<" ";
                s.insert(i);
            }
        }
        hold/=2;
        a--;
    }

    for (int i = 0; i < m; i++){
        if(s.find(i)==s.end()) cout<<i<<" ";
    }
    cout<<endl;
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