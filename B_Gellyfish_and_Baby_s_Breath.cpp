#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), q(n), a(n),b(n),m(n);
        for (int j = 0; j < n; j++) {
            cin >> p[j];
        }
        for (int j = 0; j < n; j++) {
            cin >> q[j];
        }

        m[0] = 1;
        for (int i = 1; i < n; i++){
            m[i] = (m[i-1]*2)%mod;
        }
        int x = INT_MIN,y = INT_MIN;

        for (int j = 0; j < n; j++) {
            if(p[j]>x){
                a[j]=j;
                x=p[j];
            }else{
                a[j]=a[j-1];
            }
            if(q[j]>y){
                b[j]=j;
                y=q[j];
            }else{
                b[j]=b[j-1];
            }
        }

        for (int j = 0; j < n; j++) {
            ll r;
            if(p[a[j]]>q[b[j]]){
                r=(m[p[a[j]]])+(m[q[j-a[j]]])%mod;
            }
            else if(p[a[j]]<q[b[j]]){
                r=(m[p[j-b[j]]])+(m[q[b[j]]])%mod;
            }
            else{
                if(p[j-b[j]]>q[j-a[j]]){
                    r=(m[p[j-b[j]]])+(m[q[b[j]]])%mod;
                }else{
                    r=(m[p[a[j]]])+(m[q[j-a[j]]])%mod;
                }
            }
            cout<<r%mod<<" ";
        }
        cout << endl;
    }
    return 0;
}
