#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
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


int rec(int four, int seven, int num,int n){
    if(four==0 && seven==0){
        return num>=n ? num : 1e15;
    }
    else if(four<0||seven<0){
        return 1e16;
    }
 
    int hold;
    int a = rec(four-1, seven,num*10 + 4,n);
    int b = rec(four, seven-1,num*10 + 7,n);
    hold = min(a,b);
    return hold;
}
 
void solve() {
    int n;
    cin>>n;
    int len = to_string(n).size();
    if (len % 2 != 0) len++; // make even

    while (true) {
        vector<long long> lucky;
        int half = len / 2;
        for (int mask = 0; mask < (1 << len); ++mask) {
            if (__builtin_popcount(mask) != half) continue; // equal 4s and 7s
            
            long long num = 0;
            for (int i = len - 1; i >= 0; --i) {
                num = num * 10 + ((mask >> i & 1) ? 7 : 4);
            }
            lucky.push_back(num);
        }

        sort(lucky.begin(), lucky.end());
        for (long long x : lucky)
            if (x >= n) cout<< x;
        len += 2; 
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}