#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j = 0; j<t; j++){
        string a,b;
        int n;
        cin>>n>>a>>b;

        vector<int> p;
        int zeroes = 0, ones = 0;

        for(int i = 0; i<n; i++){
            if(a[i] == '0') zeroes++;
            else ones++;

            if(zeroes == ones){
                p.push_back(i);
            }
        }
        bool is = true;
        int x = n-1, m = p.size()-1;

        while(x>=0){
            while(x>=0 && a[x] == b[x]){
                x--;
            }
            if(x>=0 && a[x] != b[x]){
                while(m>0 && x<p[m]) m--;
                if(m<0 || x != p[m]){
                    is = false;
                    break;
                } 
            }
            while(x>=0 && a[x] != b[x]){
                x--;
            }
            if(x>=0 && a[x] == b[x]){
                while(m>0 && x<p[m]) m--;
                if(m<0 || x != p[m]){
                    is = false;
                    break;
                } 
            }

        }
        if(is){
            cout<<"YES\n";
        }
        if(!is){
            cout<<"NO\n";
        }
    }
}