#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int>a(n);

        for(int j=0; j<n;j++){
            cin>>a[j];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        } 
        int ans = 1;
        int l = 1, r = 1;
        while(a[r]!=a[0]){
            r++;
        }
    }
}