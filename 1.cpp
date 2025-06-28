#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int m=0;m<t;m++){
        string s;
        cin>>s; 

        for(int i = 0; i < 10; i++){
            if((s[i]-'0') == 9-i){
                continue;
            } 
            int digit = 10;
            int index = -1;
            
            for(int j = i; j < 10; j++){
                if(s[j]-'0' >= 9-i && s[j]-'0' < digit){
                    digit = s[j]-'0';
                    index = j;
                }
            }
            swap(s[index], s[i]);
        }
        cout << s << endl;
    }
}