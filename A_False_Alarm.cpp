#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);

        for(int j=0; j<n;j++){
            cin>>a[j];
        }
        int start = 0, end = n-1;
        while(a[start]==0){
            start++;
        }
        while(a[end]==0){
            end--;
        }
        int x = end-start+1;
        if(k>=x) cout<<"YES\n";
        else cout<<"NO\n";
    }
}