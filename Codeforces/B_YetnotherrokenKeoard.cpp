#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        string st;
        cin>>st;
        vector<int> small, big;
        string ans=st;
int k=0;
        for(int i=0; i<st.length(); i++){
            if(st[i]!='b' && st[i]!='B'){
                // ans+=st[i];
                if(st[i]>='a' && st[i]<='z') small.push_back(i);
                else big.push_back(i);
            }
            else{
                if(st[i]=='b'){
                    k++;
                    if(small.size()<=0) continue;
                    // cout<<k<<"---"<<small[small.size()-1]<<"----";
                    ans[small[small.size()-1]]='$';
                    small.erase(small.end()-1);
                } else{
                    if(big.size()<=0) continue;
                    ans[big[big.size()-1]]='$';
                    big.erase(big.end()-1);
                }
            }
        }
        //cout<<ans<<"----";
        for(int i=0; i<ans.size(); i++){
            if(ans[i]=='$' || ans[i]=='b' || ans[i]=='B') continue;
            cout<<ans[i];
        } cout<<endl;
    }


    // vector<int> i;
    // i.push_back(1);
    // i.push_back(2);
    // i.erase(i.end()-1);
    // cout<<i.size();


    return 0;
}