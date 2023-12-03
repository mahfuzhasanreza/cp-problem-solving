#include<bits/stdc++.h>
using namespace std;

string changed(string st){
    for(int i=0; i<st.length(); i++){
        if(st[i]<'a'){
            st[i]+=32;
        } else{
            st[i]-=32;
        }
    }
    return st;
}

int main(){
    string st;
    cin>>st;

    for(int i=1; i<st.length(); i++){
        if(st[i]<'a'){
            continue;
        } else{
            cout<<st<<endl;
            return 0;
        }
    }

    cout<<changed(st)<<endl;

    return 0;
}