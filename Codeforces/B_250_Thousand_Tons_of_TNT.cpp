#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll res=0;
        vector<ll> pre;
        pre.push_back(0);

        for(ll i=1; i<=n; i++){
            ll num;
            cin>>num;
            pre.push_back(pre[i-1]+num);
        }

        for(ll i=1; i<n; i++){
            if(n%i!=0) continue;
            vector<ll> vct;
            for(ll j=i; j<=n; j+=i){
                vct.push_back(pre[j]-pre[j-i]);
            }
            sort(vct.begin(), vct.end());
            res=max(res, vct[vct.size()-1]-vct[0]);
        }
        cout<<res<<endl;
    }

    return 0;
}