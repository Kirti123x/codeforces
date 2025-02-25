#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cost(string str){    
    int ans = 0;
    int i = 0;
    while( i < str.size()){
        int a = 0;
        while(str[i] == '>'){
            a++;
            i++;
        }
        ans = max(ans,a);

        a = 0;
        while(str[i] == '<'){
            a++;
            i++;
        }
        ans = max(ans,a);    
    }
    return ans+1;
}

int main(){
    int n;
    int testcases;
    string str;
    cin >> testcases;
    for (int i = 0; i < testcases; i++){
        cin >> n;
        cin >> str;
        cout << cost(str) << "\n";
    }
    return 0;
}