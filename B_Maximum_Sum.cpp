#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        ll sum = 0;

        for(int j = 0; j<n; j++){
            cin>>arr[j];
        }

        sort(arr.begin(), arr.end());

        for(int j = 0; j<n-k; j++){
            sum+=arr[j];
        }

        int l = 0, r = n-k;
        ll ans = sum;

        while(r<n){
            sum-=(arr[l++]+arr[l++]);
            sum+=arr[r++];
            ans = max(ans, sum);
        }
        cout<<ans<<endl;
    }
}