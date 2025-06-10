#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
        int n;
        cin>>n;
        vector<int> arr, b;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            if(ch=='A') arr.push_back(i+1);
            else b.push_back(i+1);
        }
        if(arr[0]==1 && arr[arr.size()-1]==n){
            cout<<"Alice\n";           
        }
        else if(b[0]==1&&b[b.size()-1]==n){
            cout<<"Bob\n";
        }
        else if(arr[0]==1){
            if(b.size()>1){
                cout<<"Bob\n";
            }
            else{
                cout<<"Alice\n";
            }
        }
        else{
            if(arr.size()==1){
                cout<<"Bob\n";
            }
            else{
                if(arr[arr.size()-2]>b[b.size()-1]) cout<<"Alice\n";
                else cout<<"Bob\n";
            }
        }
    }
}