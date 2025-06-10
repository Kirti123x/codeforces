#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        string s,ans;
        cin>>n>>s;
        ans = s;
        vector<int> dir(4,0);
 
        for(int i=0;i<s.size();i++){
            if(s[i]=='N') dir[0]++;
            else if(s[i]=='S') dir[1]++;
            else if(s[i]=='E') dir[2]++;
            else if(s[i]=='W') dir[3]++;
        }

        if((dir[0]+dir[1])%2==0 && (dir[2]+dir[3])%2==0){           
            int r = 0, h = 0; 
            for (int i = 0; i < s.size(); i++){
                if(s[i]=='N'&&dir[0]%2==1){
                    ans[i] = 'R';
                    dir[0]--;
                    r++;
                }
                else if(s[i]=='S'&&dir[1]%2==1){
                    ans[i] = 'R';
                    dir[1]--;
                    r++;
                }
                else if(s[i]=='E'&&dir[2]%2==1){
                    ans[i] = 'H';
                    dir[2]--;
                    h++;
                }
                else if(s[i]=='W'&&dir[3]%2==1){
                    ans[i] = 'H';
                    dir[3]--;
                    h++;
                }               
            }
            for (int i = 0; i < s.size(); i++){
                if(ans[i]=='N'){
                    if(dir[0]%2==0){
                        ans[i] = 'H';
                        h++;
                    }
                    else{
                        ans[i] = 'R';
                        r++;
                    }                   
                    dir[0]--;
                }
                else if(ans[i]=='S'){
                    if(dir[1]%2==0){
                        ans[i] = 'H';
                        h++;
                    }
                    else{
                        ans[i] = 'R';
                        r++;
                    }                   
                    dir[1]--;
                }
                else if(ans[i]=='E'){
                    if(dir[2]%2==0){
                        ans[i] = 'H';
                        h++;
                    }
                    else{
                        ans[i] = 'R';
                        r++;
                    }                    
                    dir[2]--;
                }
                else if(ans[i]=='W'){
                    if(dir[3]%2==0){
                        ans[i] = 'H';
                        h++;
                    }
                    else{
                        ans[i] = 'R';
                        r++;
                    }
                    dir[3]--;
                }                
            }
            if(r>0&&h>0)cout<<ans<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}