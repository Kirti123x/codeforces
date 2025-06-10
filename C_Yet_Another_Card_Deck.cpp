#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n , q;
    cin>>n>>q;
    deque<int> card(n);
    deque<int> query(q);
    vector<int> ans;

    for (int j = 0; j < n; j++){
        cin>>card[j];
    }
    for (int j = 0; j < q; j++){
        cin>>query[j];
    }

    for (int j = 0; j < q; j++){
        int hold = 1; 

        for (int i = 0; i < card.size(); i++){ 

            if(card[i]==0) continue;
            if(card[i]==query[j]){
                ans.push_back(hold);
                card[i] = 0;
                card.push_front(query[j]);
                break;
            }
            hold++;
        }
    }
    
    for (int i = 0; i < q; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;   
}