#include <bits/stdc++.h>
using namespace std;

void dbg_out() {cerr<<endl;}
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {cerr<<' '<<H; dbg_out(T...);}
#define dbg(...) cerr<<"("<<#__VA_ARGS__<<"):", dbg_out( __VA_ARGS__ );

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define nl endl
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fori(i, n) for(int i=0; i<n; i++)
#define presum if(i==0) psum[i]=arr[i]; else psum[i]=psum[i-1]+arr[i];

void solve() {
    ll n, k, a, b; cin>>n>>k>>a>>b;
    bool temp=true;
    ll ans=0;
    if(k>=n){
        ans=min(n*a, b);
    } else{
        if(n*a<=(n/k)*b) temp=false;
        ans=min(n*a, (n/k)*b);

        if(temp){
            ans+=min(b, (n%k)*a);
        }
    }
    
    cout<<ans<<endl;
}

int main() {
    ll t=1;
    //cin >> t;
    while(t--) solve();
    return 0;
}