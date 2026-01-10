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
    string s; cin>>s;
    int a = 0, i = 0;
    while(i<=(n-1)/2 && i!=(n-i-1) && s[i]^s[n-i-1]){
        a++;
        i++;
    }
    cout<<n-(2*a)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--){
        solve();
    }   
}