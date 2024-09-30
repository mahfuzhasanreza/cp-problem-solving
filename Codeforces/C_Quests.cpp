#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int preSum[n];
        int mxB[n];
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(i==0) preSum[i]=a;
            else preSum[i]=preSum[i-1]+a;
        }

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(i==0) mxB[i]=a;
            else mxB[i]=max(mxB[i-1], a);
        }
        
        int ans=0;

        k--;
        for(int i=0; i<n; i++){
            ans=max(ans, preSum[i]+mxB[i]*(k-i));
            
            if(k-i==0) break;
        }
        cout<<ans<<endl;
    }

    return 0;
}