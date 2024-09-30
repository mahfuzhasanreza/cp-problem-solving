#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t; cin>>t;

    while(t--){
        ll n, k; cin>>n>>k;

        ll arr[n];
        bool isSorted=true;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i!=0 && arr[i]<arr[i-1]) isSorted=false;
        }
        
        if(n<=1) cout<<"YES"<<endl;
        else if(k<=1 && isSorted==false) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}