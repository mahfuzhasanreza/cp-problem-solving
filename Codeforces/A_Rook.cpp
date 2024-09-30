#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        string st;
        cin>>st;
        char a=st[0];
        char b=st[1];
        int j=1;
        for(char i='1'; i<='8'; i++, j++){
            if(i==b) continue;
            cout<<a<<j<<endl;
        }
        
        for(char i='a'; i<='h'; i++){
            if(i==a) continue;
            cout<<i<<b<<endl;
        }
    }

    return 0;
}