#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    int t; cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int d=max(a,max(b,c));
        int e=0;
        if(d==a) e=max(b,c);
        else if(d==b) e=max(a,c);
        else e=max(a, b);
        if(d+e>=10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}