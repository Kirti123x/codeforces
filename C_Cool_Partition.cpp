#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> req,fortest;
    
        for (int i = 0; i < n; i++){
            cin>>v[i];
        }
        int ans = 0, count = 0;

        for (int i = 0; i < n; i++){
            req[v[i]]++;
            fortest[v[i]]++;
            if(fortest.size()==req.size()) {
                ans++;
                fortest.clear();
            }
        }
    
        cout<<ans<<endl;
    }
}