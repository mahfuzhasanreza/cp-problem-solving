#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,f,a,b; cin>>n>>f>>a>>b;
        ll arr[n];

        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        
        //ll k=min(a,b);
        bool no=false;
        for(ll i=0; i<n; i++){
            if(i>0){

                f=f-min((arr[i]-arr[i-1])*a, b);
            }
            else f=f-min((arr[i])*a, b);

            if(f<=0){
                no=true; break;
            }
        }
        if(no) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

	return 0;
}