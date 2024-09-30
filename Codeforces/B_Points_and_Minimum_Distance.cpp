#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int arr[2*n];
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+(2*n));
        long long dis=0;
        for(int i=0; i<n-1; i++){
            dis=dis+abs(arr[i]-arr[i+1]);
        }
        int arr2[n];
        for(int i=n, j=0; i<2*n-1; i++, j++){
            dis=dis+abs(arr[i]-arr[i+1]);
            arr2[j]=arr[i];
        }
        arr2[n-1]=arr[2*n-1];
        cout<<dis<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" "<<arr2[i]<<endl;
        }
    }

    return 0;
}