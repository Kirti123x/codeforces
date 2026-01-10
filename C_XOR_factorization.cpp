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

void solve(){
    int n,k;
    cin>>n>>k;
    vi ans(k, n);
    if(k%2 == 0){
        int j = 0;
        for(int i=30; i>=0; i--){
            if(n & (1<<i)){                
                if(j>=k){                 // If the bit is set     // it must appear odd no. of times
                    ans[0] ^= (1<<i);
                }
                else{
                    ans[j] ^= (1<<i);
                    j++;
                }
            }
            else{
                // set the even no of bits, for those elements whose bits have been unset to make the count of bits as odd
                // because those numbers are safe for setting their any lower unset bits
                for(int l=0; l<j-1; l+=2){
                    ans[l] ^= (1<<i);
                    ans[l+1] ^= (1<<i);
                }
            }
        }
    }
    print(ans);
    ln;
    return;
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