#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    string st; cin>>st;
    for(int i=0; i<t-1; i++){
        if(st[i]!=st[i+1]){
            cout<<"YES"<<endl<<st[i]<<st[i+1]<<endl;
            return 0;
        }
    } cout<<"NO"<<endl;

    return 0;
}