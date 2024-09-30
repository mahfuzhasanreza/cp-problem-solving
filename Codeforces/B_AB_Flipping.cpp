#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        string st;
  
        cin>>st;
        ll count=0;
        ll countB=0;
        for(ll i=n-1; i>=0; i--){
            if(st[i]=='B' && st[i-1]=='A'){
                count+=countB;
                countB=0;
                count++;
                swap(st[i], st[i-1]);
            } else if(st[i]=='B'){
                countB++;
            }
        } cout<<count<<endl;
    }

    return 0;
}