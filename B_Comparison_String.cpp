#include<bits/stdc++.h>
using namespace std;

int cost(string str, int n){
    int a = 0, b = 0, ans = 0;
    for(int i = 0; i<n; i++){
        if(str[i] == '<'){
            a++;
            ans = max(ans, b);
            b=0;
        }else if(str[i] == '>'){
            b++;
            ans = max(ans, a);
            a = 0;
        }
    }
    if(ans > a && ans > b)return ans;
    else return max(a,b);
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
       cin>>n;
       string str;
       cin>>str;
        cout<<cost(str, n)+1<<"\n";
    }
}