#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        set<int> mp;
        ll start=0, end=INT_MAX;
        for(ll i=0; i<n; i++){
            ll a;
            ll x;
            cin>>a>>x;

            if(a==1){
                if(x>start) start=x;
            } else if(a==2){
                if(end>x) end=x;
            } else{
                mp.insert(x);
            }
        }

        //cout<<start<<"---"<<end<<"---";
        if(start>end){
            cout<<0<<endl;
            continue;
        }

        ll ans=end-start+1;
        int prev=INT_MIN;
        for(auto it:mp){
            if(it!=prev && it>=start && it<=end){
                ans--;
                prev=it;
            }
        }
    
        cout<<ans<<endl;
    }

	return 0;
}