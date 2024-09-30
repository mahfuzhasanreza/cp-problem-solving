#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        bool ans=false;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k) ans=true;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}