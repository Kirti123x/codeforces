#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define yes cout << "NO\n"
#define nl cout << endl
typedef vector<int> vi;
typedef vector<ll> vll;

void solve() {
	int n, q; cin>>n>>q;
	vll a(n), k(q), pre(n);


	for(int i = 0; i<n; i++){
		cin>>a[i];
		if(i==0) pre[i]=a[i];
		else pre[i]=pre[i-1]+a[i];
	} 

	vll m(n);
	ll x =0;
	for(int i =0; i<n; i++){
		x = max(x, a[i]);
		m[i]=x;
	}
	for(int i =0; i<q; i++){
		cin>>k[i];
		int low=0, high=m.size()-1;
        ll ans=0;

        while(low<=high){
            int mid=(low+high)/2;
			
            if(m[mid]<=k[i]){
                ans=pre[mid];
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<" ";
	}
	nl;
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