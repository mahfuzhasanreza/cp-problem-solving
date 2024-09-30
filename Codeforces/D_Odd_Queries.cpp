#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n, q;
        cin>>n>>q;
        
        long long arr[n+1]={0};
        long long prefSum[n+1]={0};
  
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if(i==1){
                prefSum[1]=arr[1];
            } else{
                prefSum[i]=prefSum[i-1]+arr[i];
            }
        }
        
        while(q--){
            long long l, r, k;
            cin>>l>>r>>k;
            long long tempSum=prefSum[n];
            tempSum-=(prefSum[r]-prefSum[l-1]);
            tempSum+=((r-l+1)*k);

            if(tempSum%2!=0){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}