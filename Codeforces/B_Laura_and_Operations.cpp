#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll a, b, c; cin>>a>>b>>c;
        ll mx=0;
        if(abs(a-b)%2==0 && abs(b-c)%2==0) cout<<1<<" "<<1<<" "<<1<<endl;
        else{
            if(abs(a-b)%2==0) cout<<0<<" "<<0<<" "<<1<<endl;
            else if(abs(a-c)%2==0) cout<<0<<" "<<1<<" "<<0<<endl;
            else if(abs(b-c)%2==0) cout<<1<<" "<<0<<" "<<0<<endl;
            else cout<<0<<" "<<0<<" "<<0<<endl;
        }
    }

    return 0;
}