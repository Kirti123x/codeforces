#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int j = 0; j<n; j++){
            cin>>a[j];
        }

        ll ans = a[0], sum = a[0];

        for(int i = 1; i<n; i++){
            if(abs(a[i-1]%2) == abs(a[i]%2) || sum<0){
                sum = a[i];
            }else{
                sum+=a[i];
            }
            ans = max(ans, sum);
        }
        cout<<ans<<endl;
    }
}