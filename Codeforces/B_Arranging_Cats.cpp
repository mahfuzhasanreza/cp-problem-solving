#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        int n; cin>>n;
        string s1, s2;
        cin>>s1>>s2;

        int zz=0, oo=0;
        for(int i=0; i<n; i++){
            int z=0;
            if(s1[i]=='0') z=1;

            if(z==1){
                if(s1[i]!=s2[i]) zz++; 
            } else{
                if(s1[i]!=s2[i]) oo++;
            }
        }
        ll k=0;
        if(oo<zz){
            k=oo;
            k+=zz-oo;
        }
        else{
            k=zz; k+=oo-zz;
        }
        // ll k=oo+zz;
        // k=(k+1)/2;
        cout<<k<<endl;
    }

	return 0;
}