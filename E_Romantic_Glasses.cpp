#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int j = 0; j<n; j++){
            cin>>arr[j];
        }
        int ans = 0;
        for(int j = 1; j<n; j++){
            if(j%2 == 1){
                arr[j]=arr[j-1]-arr[j];
            }else{
                arr[j]+=arr[j-1];
            }
            if(arr[j] == 0) ans = 1;
        }
        sort(arr.begin(), arr.end());
        
        for(int j = 1; j<n; j++){
            if(arr[j]==arr[j-1]){
                ans=1;
                break;
            }
        }
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
}