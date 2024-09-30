#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;

        ll arr[n];
        vector<ll> ans;

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        sort(arr, arr+n);
        ll small=arr[0], big=arr[n-1];

        ll count=0;
        while(small!=big){
            if(small%2!=0 && big%2==0){
                small++;
                big++;
                ans.push_back(1);
            } else{
                ans.push_back(0);
            }
            count++;
            small/=2;
            big/=2;
        }
        cout<<count<<endl;
        if(count<=n && count!=0){
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            } cout<<endl;
        }
    }

    return 0;
}