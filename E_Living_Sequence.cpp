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

vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size() - 2;
        int x1 = 0;
        
        for (int x : nums) {
            x1 ^= x;
        }
        int x2 = 0;

        for (int i = 0; i < n; i++) x2 ^= i;

        int a = x1 ^ x2;     

        int rb = a & -a;

        int x = 0, y = 0;
        for (int num : nums) {
            if (num & rb) x ^= num;
            else y ^= num;
        }
        for (int i = 0; i < n; i++) {
            if (i & rb) x ^= i;
            else y ^= i;
        }
        return {x, y};
    }
void solve() {
    int n;  cin>>n;

    
    
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


