#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string st;
        cin>>st;

        int c=0;
        for(int i=0; i<st.length(); i++){
            if(st[i]=='0'){
                c++;
            }
        }
        if(c==st.length()-c){
            cout<<c-1<<endl;
        } else if(c<st.length()-c){
            cout<<c<<endl;
        } else{
            cout<<st.length()-c<<endl;
        }
    }

    return 0;
}