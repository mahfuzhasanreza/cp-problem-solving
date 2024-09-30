#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        int n, q; cin>>n>>q;
        ll arr[n], mod[q];
        ll mx=LONG_LONG_MIN;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(mx<arr[i]) mx=arr[i];
        }
        for(int i=0; i<q; i++) cin>>mod[i];
        int dp[31]={0};
        for(int i=0; i<q; i++){
            if(dp[mod[i]]==1) continue;
            dp[mod[i]]=1;
            ll num=pow(2, mod[i]);
            if(num>mx) continue;
            for(int j=0; j<n; j++){
                if(arr[j]%num==0){
                    arr[j]+=(pow(2, mod[i]-1));
                }
            }
        }
        for(int i=0; i<n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}