#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        char arr[n];
        
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        int c=0;
        ll ans=0;
        for(ll i=0; i<n; i++){
            if(arr[i]=='.') c++;
            else if(c<3){
                ans+=c;
                c=0;
            }
            if(c>=3){
                ans=2;
                break;
            }
            if(i==n-1 && arr[i]=='.') ans+=c;
        }

        cout<<ans<<endl;

    }

    return 0;
}