#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int> a(n);
        int ans = -1, x = 0;
        int two =0;
        for(int j = 0; j<n; j++){
            cin>>a[j];
            if(a[j]==2) two++;
        }
        if(two%2 == 1){
            cout<<ans<<endl;
            continue;;
        } 
        for(int j = 0; j<n; j++){
            if(a[j]==2) x++;
            if(2*x == two){
                ans = j+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}