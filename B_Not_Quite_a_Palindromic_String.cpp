#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n,k;
        cin>>n>>k;
        string st;
        cin>>st;

        int zero = 0, one = 0;

        for (int i = 0; i < n; i++){
            if(st[i]=='0') zero++;
            else one++;
        }

        int hold = n/2-k;
        zero -=hold;
        one -=hold;
        if(zero%2==0 && one%2==0 && zero>=0 && one>=0){
            cout<<"YES\n";
        }           
        else cout<<"NO 1\n";        
    }
}