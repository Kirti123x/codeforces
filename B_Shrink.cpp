#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int j = 0; j<(n+1)/2; j++){
            a[j] = j+2;
        }
        a[n-1] = 1;
        int x = n;
        for(int j = (n+1)/2; j<n-1; j++){
            a[j] = x;
            x--;
        }
        for(int j = 0; j<n; j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}