#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n, m;
        cin>>n>>m;
        ll count=0;
        while(n || m){
            if(n%2==m%2) count++;
            else break;
            n=n/2;
            m=m/2;
        }
        cout<<(1LL<<count)<<endl;
    }
    
    return 0;
}