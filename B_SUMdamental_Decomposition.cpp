#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        long long n, x;
        cin>>n>>x;
        long long count = 0;
        int m = x;
        while(x){
            x = x&(x-1);
            count++;
        }
        x = m;
        if(x == 0){
            if(n == 1) cout<<-1<<endl;
            else if(n%2 == 0) cout<<n<<endl;
            else cout<<n+3<<endl;
        }
        else if(x == 1){
            if(n%2 == 0) cout<<n+3<<endl;
            else cout<<n<<endl;
        }
        else{
            if(n<=count){
                cout<<x<<endl;
            }else{
                int k = x+(n-count);
                if((n-count)%2 == 0) cout<<k<<endl;
                else{
                    cout<<k+1<<endl;
                } 
            }
        }
    }
}