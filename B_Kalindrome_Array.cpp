#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll>&a, int x){
    int n = a.size();
    vector<ll>b;
    for(int i = 0; i<n; i++){
        if(a[i]!=x){
            b.push_back(a[i]);
        }
    }
    int m = b.size();
    for(int i = 0; i<m; i++){
        if(b[i]!=b[m-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<ll>a(n);
        bool is = false;
        for(int j = 0; j<n; j++) cin>>a[j];
        for(int j = 0; j<n; j++){
            if(a[j]!=a[n-j-1]){
                if(check(a,a[j]) || check(a,a[n-j-1])){
                    cout<<"YES\n";
                    is = true;
                }
                else{
                    cout<<"NO\n";
                    is = true;
                }
                break;
            }
        }
        if(!is) cout<<"YES\n";
    }
}