#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int j = 0; j<n; j++){
            cin>>a[j];
        }
        for(int j = 0; j<n; j++){
            cin>>b[j];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll ans = 1; 
        ll m = n-1, x = 0;

        for(int j = n-1; j>=0; j--){
            while(m>=0 && a[m]>b[j]){
                x++;
                m--;
            }
            if(x == 0){
                ans = 0;
            } 
            //cout<<x<<" ";
            ans= (ans%mod)*(x-(n-1-j));
        }
        cout<<ans<<endl;
    }
}