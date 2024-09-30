#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll a, b, xk, yk, xq, yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        ll axes[]={-a, -a, -b, b, a, a, b, -b};
        ll y_axes[]={-b, b, a, a, b, -b, -a, -a};

        set<pair<ll, ll>> pk;
        set<pair<ll, ll>> pq;

        for(ll i=0; i<8; i++){
            pk.insert({xk+axes[i], yk+y_axes[i]});
            pq.insert({xq+axes[i], yq+y_axes[i]});
        }

        ll cnt=0;        
        for(auto val : pk){
            if(pq.find(val) != pq.end()){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}