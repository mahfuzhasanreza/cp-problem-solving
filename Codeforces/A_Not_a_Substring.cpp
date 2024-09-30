#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        string st; cin>>st;

        if(st=="()"){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        bool y=false;
        for(int i=0; i<st.length()-1; i++){
            if(st[i]==')' && st[i+1]=='('){
                y=true;
                break;
            }
        }
        if(y){
            for(int i=0; i<st.length(); i++){
                cout<<"(";
            }
            for(int i=0; i<st.length(); i++){
                cout<<")";
            } cout<<endl;
            continue;
        }
        for(int i=0; i<st.length(); i++){
            cout<<"()";
        } cout<<endl;
    }

    return 0;
}