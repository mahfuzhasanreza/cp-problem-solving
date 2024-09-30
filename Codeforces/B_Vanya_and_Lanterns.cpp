#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin>>n>>l;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);

    double mx=0.0;
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]>mx) mx=arr[i]-arr[i-1];
    }
    mx/=2;

    cout<<setprecision(10)<<max(mx, (double)max(arr[0], l-arr[n-1]));


    return 0;
}