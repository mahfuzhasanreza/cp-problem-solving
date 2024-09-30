#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll ans=0;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
            if(i==0) ans+=(arr[0]-1);
            else if(arr[i]>arr[i-1]) ans+=(arr[i]-arr[i-1]);
        }
        cout<<ans<<endl;
        
    }

    return 0;
}