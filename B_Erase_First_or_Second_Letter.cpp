#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        string s;
        cin>>n>>s;
        int ans = 0;
        unordered_map<char,int> map;
    
        for (int i = 0; i <n; i++)
        {
            map[s[i]]++;
            ans+=map.size();
        }
        cout<<ans<<endl;
    }
}