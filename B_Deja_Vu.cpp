#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n,q;
        cin>>n>>q;
        vector<int> arr;
        vector<int> v;
        vector<int> s;


        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        for (int j = 0; j < q; j++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int m = v[0];
        s.push_back(m);

        for(int j = 1; j<q; j++){
            if(v[j]<m){
                m = v[j];
                s.push_back(m);
            } 
        }
        for(int j = 0; j<s.size(); j++){
            for(int k = 0; k<arr.size(); k++){
                if(arr[k]%(1<<s[j]) == 0){
                    arr[k]+=(1<<(s[j]-1));
                }
            }
        }
        for (int j = 0; j < n; j++) {
            cout<<arr[j]<<" ";
        }
        cout<<endl; 
        
    }
}