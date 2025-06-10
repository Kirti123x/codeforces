#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int j = 0; j<n; j++){
            cin>>arr[j];
        }

        bool istrue = false;

        int a = 0, b = 1;
        while(b<n){
            if(arr[b] != arr[a]){
                a=b;
                b++;                
            }
            else{
                if(arr[b] == 0){
                    istrue = true;
                    break;
                }
                else{
                    while(b<n-1 && arr[b] == 1){
                        b++;
                    }
                    if(b < n){
                        if(arr[b] == 0 || (a>0 && arr[a-1]==0)){
                            a=b;
                            b++;
                        }
                        else{
                            istrue = true;
                            break;
                        }
                    }
                }
            }
        }

        if(!istrue){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}