#include<bits/stdc++.h>
using namespace std;

int ispresent(vector<int> a, vector<int> b, int n){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]) return i;         // to find if the subarray contains any modified value 
    }
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int j = 0; j<n; j++){
            cin>>a[j];
        }
        for(int j = 0; j<n; j++){
            cin>>b[j];
        }

        vector<pair<int,int>> segments;
        int l = 0;
        
        for(int r =1; r < n; r++){
            if(b[r-1] > b[r]){
                segments.push_back({l, r - 1}); 
                l = r;
            }
        }
        segments.push_back({l, n - 1});
        int x;
        for(int j = 0; j<n; j++){
            if(b[j] != a[j])
            x = j;
        }

        for(auto it : segments){
            if(x <= it.second && x >= it.first) cout<<it.first+1<<" "<<it.second+1<<endl;
        }
    }
}