#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n, q;
        cin>>n>>q;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n, greater<ll>());
        for(int i=1; i<n; i++){
            arr[i]+=arr[i-1];
        }
        
        ll index;
        while(q--){
            ll k;
            cin>>k;
            if(arr[n-1]<k){
                cout<<-1<<endl;
                continue;
            }
            ll l=0, r=n-1;
            while(l<=r){
                ll mid=l+(r-l)/2;
                if(arr[mid]>=k){
                    index=mid;
                    r=mid-1;
                } else{
                    l=mid+1;
                }
            }
            cout<<index+1<<endl;
        }
    }

    return 0;
}