#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;

    for(int i=0; i<st.length(); i++){
        if(st[i]=='W' && st[i+1]=='U' && st[i+2]=='B'){
                i+=2;
                if(i!=0){
                    cout<<" ";
                }
        } else{
            cout<<st[i];
        }
    }

    return 0;
}