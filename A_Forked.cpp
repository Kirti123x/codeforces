#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int arr[3][2];
        for(int k = 0; k<3; k++){
            for(int j = 0; j<2; j++){
                cin>>arr[k][j];
            }
        }
        if(abs(arr[1][0]-arr[2][0]) == 3 && abs(arr[1][1]-arr[2][1]) == 3) cout<<2<<"\n";
        else if(abs(arr[1][0]-arr[2][0]) == 4 && (abs(arr[1][1]-arr[2][1]) == 0 || abs(arr[1][1]-arr[2][1]) == 2)) cout<<1<<"\n";
        else if(abs(arr[2][0]-arr[1][0]) == 4 && (abs(arr[2][1]-arr[1][1]) == 0 || abs(arr[2][1]-arr[1][1]) == 2)) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}