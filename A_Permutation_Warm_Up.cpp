#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        long long ans;
        ans = (n*n)/4;
        cout<<ans+1<<endl;
    }
}