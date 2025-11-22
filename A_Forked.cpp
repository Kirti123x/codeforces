#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
typedef vector<int> vi;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve(){ 
    long long a, b;
	cin >> a >> b;
	long long xk, yk,xq, yq; 
	cin >> xk >> yk>>xq >> yq;
	set<pair<int, int>> k, q;

	for (int j = 0; j < 4; j++){
		k.insert({xk + dx[j]*a, yk + dy[j]*b});
		k.insert({xk + dx[j]*b, yk + dy[j]*a});
		q.insert({xq + dx[j]*a, yq + dy[j]*b});
		q.insert({xq + dx[j]*b, yq + dy[j]*a});
	}
	int ans = 0; 
	for (auto i : k)
		if(q.find(i)!=q.end()) ans++;

	cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
        cout<<endl;
    }
}
