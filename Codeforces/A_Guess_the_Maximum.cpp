#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        
        int ans=INT_MAX;
        for(int i=1; i<n; i++){
            int a=max(arr[i-1], arr[i]);
            ans=min(ans, a);
        }
        cout<<ans-1<<endl;
    }
    return 0;
}