#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int j = 0; j < n; j++){
            cin>>v[j];
            v[j] = v[j]-j;
        }
        unordered_map<int, int> m;
        for (int j = 0; j < n; j++){
            m[v[j]]++;
        }
        long long ans = 0;
        for(auto j:m){
            long long x = j.second;
            ans += (long long)x*(x-1)/2;
        }
        cout<<ans<<endl;
    }
}