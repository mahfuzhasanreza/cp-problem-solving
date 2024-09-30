#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;

    while(t--){
        int n;
        cin>>n;

        string st;
        cin>>st;

        set<char> s;
        ll ans=0;
        for(int i=0; i<n; i++){
            s.insert(st[i]);
            ans+=s.size();
        }
        cout<<ans<<endl;
    }

    return 0;
}