#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k = 0; k<t; k++){
        unordered_map<int,int> mp = {{0,3},{1,1},{2,2},{3,1},{5,1}};
        int n;
        cin>>n;
        int arr[n];
        for(int j= 0; j<n; j++){
            cin>>arr[j];
        }
        if(n<8)cout<<0<<"\n";
        else{
            int i;
            for (int i = 0; i < n; i++) {
                
                auto it = mp.find(arr[i]);
                
                if (it != mp.end()) {
                    if (--(it->second) == 0) {
                        mp.erase(it);
                    }
                }
                if(mp.empty()){
                    cout<<i+1<<"\n";
                    break;
                }
            }
            if(!mp.empty()) cout<<0<<"\n";
        }
    }
}