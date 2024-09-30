#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;

    while(t--){
        ll n, x; cin>>n>>x;
        vector<ll> arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        ll low=1, high=1e10;
        ll h=1;

        while(low<=high){
            ll mid=(high-low)/2+low;
            ll sum=0;
            for(ll i=0; i<n; i++){
                if(arr[i]>=mid) break;
                sum+=(mid-arr[i]);
            }
            if(sum>x){
                high=mid-1;
            } else{
                h=mid;
                low=mid+1;
            }
        }
        cout<<h<<endl; 
    }

    return 0;
}