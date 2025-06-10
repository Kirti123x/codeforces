#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int m = 0; m<t; m++){
        int n , x , y;
        cin>>n>>x>>y;
        vector<int> v(n);

        for(int i=0;i<n;i++) cin>>v[i];

        map<pair<int,int> , int> mp;

        for(int i=0;i<n;i++){
            mp[{v[i] % x , v[i] % y}]++;
        }

        long long res = 0;

        for(auto &it : mp){
            int a = it.first.first, b = it.first.second;

            long long total = it.second;

            if(a == 0 || x == a*2){
                res += total*(total-1);
            }
            else{
                if(mp.find({x - a , b}) != mp.end()){
                    int total1 = mp[{x - a , b}];
                    res += (total * total1);
                }
            }
        }
        cout<<res/2<<endl;
    }
}