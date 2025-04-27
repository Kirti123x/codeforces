#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j= 0; j<n; j++){
            cin>>arr[j];
        }
        int ans=0;
        bool placed = true;
        for(int j= 0; j<n; j++){
            if(arr[j]!=j+1){
                ans = gcd(ans,abs(arr[j]-j-1));
                placed = false;
            }
        }
        if(placed){
            cout<<0<<"\n";
        }
        else{
            cout<<ans<<"\n";
        }
    }
}