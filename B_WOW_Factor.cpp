#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> v;
    int vCount=1;
    int oCount=0;
    int check = 0;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='v'&&s[i+1]=='v'){
            if(oCount>0){
                v.push_back(oCount);
                oCount=0;
            }

            vCount++;

            if(i==s.size()-2&&vCount>1){
                v.push_back(vCount -1);
            }
            check = 1;
        }
        else if(s[i]=='o'&&check){
            if(vCount>1){
                v.push_back(vCount - 1);
            }
            vCount = 1;
            oCount++;
        }
    }
    vCount = 0;
    oCount = 0;
    int ans = 0;
    for(int i=0;i<v.size();i+=2){
        int a = 0;
        oCount = 0;
        for(int j=i+1;j<v.size();j++){
            if(a%2==0){
                oCount+=v[j];
            }
            else{
                ans+=v[i]*oCount*v[j];
            }
            a++;
        }
    }
    cout<<ans<<endl;    
}