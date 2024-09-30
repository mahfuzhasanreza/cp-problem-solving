#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b; cin>>a>>b;
        if((a%2+b%2)%2) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }

    return 0;
}