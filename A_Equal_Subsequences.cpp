#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n, k;
        cin>>n>>k;
        for(int j = 0; j<n; j++){
            if(j<k)cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}