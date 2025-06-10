#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j = 0; j<t; j++){
        int n;
        cin>>n;

        vector<int> v(n);
        stack<int> st;
        for(int i=0;i<n;i++) cin>>v[i];

        int count = 1;
        st.push(v[0]);
        for(int i=1;i<n;i++){

            if(st.top()+1<v[i]){
                count++;
                st.push(v[i]);
            } 
        }
        cout<<count<<endl;
    }
}