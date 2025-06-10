#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> v(n), a(n);
        int m = INT_MIN, count = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>v[j];
            m = max(v[j],m);
        }
        for (int j = 0; j< n; j++)
        {
            if(v[j]==m){
                a[j] = 1;
                count++;
            }
            else{
                a[j] = 2;
            }
        }        
        if(count==0||count==n){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for (int j = 0; j< n; j++)
            {
                cout<<a[j]<<" "; 
            } cout<<endl;
        }        
    }
}

