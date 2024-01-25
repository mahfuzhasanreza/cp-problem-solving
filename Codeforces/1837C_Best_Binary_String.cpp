#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string st;
        cin>>st;

        string res;

        bool findOne=false;
        for(int i=0; i<st.length(); i++){
            if(st[i]=='1'){
                findOne=true;
            } else if(st[i]=='0'){
                findOne=false;
            }
            
            if(findOne && st[i]=='?'){
                res.push_back('1');
            } else if(st[i]=='?'){
                res.push_back('0');
            } else{
                res.push_back(st[i]);
            }
        }
        cout<<res<<endl;       
    }

    return 0;
}