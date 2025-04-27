#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
       int n;
       cin>>n;
       int count = 0;
       while(n%6 == 0 && n>=1){
        n /= 6;
        count++;
       }
       while(n%3 == 0 && n>=1){
        n /= 3;
        count+=2;
       }
       if(n == 1) cout<<count<<"\n";
       else cout<<"-1\n";
    }
}