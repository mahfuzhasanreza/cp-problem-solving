#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int ans=arr[n-1]-arr[0];
    for(int i=0, j=m-1; i<=n-m; i++, j++){
        ans=min(ans, arr[j]-arr[i]);
    }
    cout<<ans<<endl;

    return 0;
}