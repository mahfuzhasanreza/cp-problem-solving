#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        string st;
        cin>>st;

        if(st.size()==1){
            cout<<1<<endl;
            continue;
        }

        int cnt0=0, cnt1=0;
        for(int i=0; i<st.size(); i++){
            if(st[i]=='0') cnt0++;
            else cnt1++;
        }
        int i=0;
        for(; i<st.size(); i++){
            if(st[i]=='0'){
                if(cnt1>0){
                    cnt1--;
                } else{
                    break;
                }
            } else{
                if(cnt0>0){
                    cnt0--;
                } else{
                    break;
                }
            }
        }
        cout<<st.size()-i<<endl;
    }

    return 0;
}