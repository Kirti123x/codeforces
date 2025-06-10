#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        string s;
        cin>>s;
        int n = s.length();
        if(n > 0){
            int count = 0, x = 1;

            for(int j = 1; j<n; j++){
                
                if(s[j] == '(') x++;
                if(s[j] == ')') x--;
                if(x == 0) count++;
            }

            if(count > 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
}