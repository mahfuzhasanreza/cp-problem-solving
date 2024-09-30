#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define nl endl
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fori(i, n) for(int i=0; i<n; i++)
#define presum if(i==0) psum[i]=arr[i]; else psum[i]=psum[i-1]+arr[i];

void solve() {
    ll x, y, a, b; cin>>x>>y>>a>>b;
    ll ans=0;
    x=abs(x);
    y=abs(y);
    ans=min(a*x+a*y, b*min(x,y)+a*(max(x,y)-min(x,y)));
    cout<<ans<<endl;
}

int main() {
    ll t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}