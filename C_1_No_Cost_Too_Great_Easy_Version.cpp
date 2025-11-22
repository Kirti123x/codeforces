#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
    int n;
    vi a(n),b(n);
    int even = 0, odd =0;
    for(int i =0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    for(int i =0; i<n; i++)cin>>b[i];



    if(even>=2){
        cout<<2<<endl;
    } 
    else if(even == 1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
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