#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n, k;
        cin>>n>>k;
        if(n%2 == 0){
            if(k%n != 0) cout<<k%n<<"\n";
            else cout<<n<<"\n";
        }else{
            int ans = (k+(k-1)/(n/2))%n;
            if(ans != 0) cout<<ans<<"\n";
            else cout<<n<<"\n";
        }
    }
}