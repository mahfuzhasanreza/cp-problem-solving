#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, k, q;
        cin>>n>>k>>q;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        long long ans=0, cons=0;
        for(int i=0; i<n; i++){
            if(arr[i]<=q){
                cons++;
                if(i==n-1 || arr[i+1]>q){
                    if(cons>=k){
                        ans+=(((cons-k+1)*(cons-k+2))/2);
                    }
                    i++;
                    cons=0;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}