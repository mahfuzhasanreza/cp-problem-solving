#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;
        string st; cin>>st;
        int c0=0, c1=0;
        bool yes=false;
        for(int i=0; i<n; i++){
            if(st[i]=='0') c0++;
            else c1++;

            if(i!=0){
                if(st[i]!=st[i-1]) yes=true;
            }
        }
        if(c0>c1) cout<<"YES"<<endl;
        else if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}