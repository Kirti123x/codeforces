#include<bits/stdc++.h>
using namespace std;

string binary(int a){
    int rem = 0;
    string str = "";
    while(a > 0){
        str += to_string(a%2);
        a /= 2;
    }
    reverse(str.begin(),str.end());
    return str;
}
void love(){
    int n;
    string s,r;
    cin>>n;
    cin>>r;
    cin>>s;
    int j = n-1;
    int ans = 0;
    for(int i=0;i<n/2;i++){
        if(r[i]!=r[j]){
            ans++;
            r[i]=r[j] = '1';
        }
        j--;
    }
    cout<< ans<<"\n";
    for(int i=0;i<n;i++){
        if(s[i]==r[i])
            s[i] = '0';
        else    
            s[i]= '1';
    }
    cout<<s<<"\n";

}

int main(){
    int t, n, r = 0;
    string a, b;
    cin>>t;
    
    for(int x = 0; x<t; x++){
        cin>>n>>a>>b;
        int m = 0, p = 0;
        for(int i = n-1; i>=0; i--){
            m+=(a[i]<<(n-i-1));
            p+=(a[i]<<(n-i-1));
        }
        r = m^p;
        string bi = binary(r);
        int flips = 0;
        for(int i = 0; i<(bi.length()/2); i++){
            if(bi[i] != bi[bi.length()-i-1]){
                if(bi[i] == '1'){
                    bi[i] = '0';
                }else{
                    bi[i] = '1';
                }
                flips++;
            }
        }
        cout<<flips<<"\n"<<bi;
    }  
}