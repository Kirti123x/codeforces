#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    if(x.size()==1){
        cout<<0;
    } 
    else{
        int n=0;
 
        while(x.size()>1){
            while(x[x.size()-1] == '0'){
                n++;
                x.pop_back();
            }
            int m = 0;
            if(x.size()>1 && x[x.size()-1] == '1'){
                n++;
                while(x.size()>0 && x[x.size()-1] == '1'){
                    n++;
                    x.pop_back();
                }
            }
            
            if(x.size()>1) x[x.size()-1] = '1';
        }
        cout<<n;
    }    
}