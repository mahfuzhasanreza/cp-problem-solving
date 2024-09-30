#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;

    while(t--){
        int a, b, c, d, e,f, g,h; cin>>a>>b>>c>>d>>e>>f>>g>>h;
        int aa=abs(b-d);
        if(!aa) aa=abs(d-f);
        int bb=abs(a-c);
        if(!bb) bb=abs(c-e);
        cout<<aa*bb<<endl;
    }

	return 0;
}