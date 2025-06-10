#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     for(int x = 0; x<t; x++){
//         string s;
//         cin>>s;
//         for(int i = 0; i<10; i++){
//             int ind = -1;
//             if((s[i]-48) == 9-i){
//                 a.push_back(a[i]);
//                 continue;
//             } 
//             int m = s[i]-48;
//             int j=0;
//             for(j = 0; j<10; j++){  
//                 if(ind == -1){
//                     if((s[j]-48) >= 9-i && s[j]<s[i] ){
//                         m = min(s[j]-48, m);
//                         ind = 1;
//                     }
//                 }                           
//             }
//             swap(s[i], s[j]);
//         }
//         cout<<s<<endl;
//     }
// }




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


// int main(){
//     int t;
//     cin>>t;
//     for(int m=0;m<t;m++){
//         string s;
//         cin>>s;
//         string ans;
//         for (int i = 0; i < 10; i++){
//             int m = 10, index = -1;

//             for(int j = 0; j < 10; j++){
//                 if(s[j]-48 >= 9-i && s[j] != 'a'){
//                     if(m > s[j]-48){
//                         m = s[j]-48;
//                         index = j;
//                     }
//                 }
//             }
//             if(index != -1){
//                 s[index] = 'a';
//             }
//             if(m!=10){
//                 ans.push_back(m+48);
//             }
//         }       
//         cout<< ans<<endl;
//     }
// }