#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;    
    for(int i=0;i<t;i++){
        string s, str;
        cin>>s;
        str = s;
        int cnt0 = 0, cnt1 = 0;
        int k = 0;
        for(k=0;k<s.size();k++){
          if(s[k]=='0') cnt0++;
          else cnt1++;
        }
        char larger;
        int life;
        if(cnt0 > cnt1){ 
            larger = '0';
            life = cnt1;
        }
        else{ 
            larger = '1';
            life = cnt0;
        }
        k=0;
        for(k=0;k<s.size();k++){
            if(s[k] == larger) life--;
            if(life < 0) break;
        }
        cout<<s.size()-k<<endl;
    }
}