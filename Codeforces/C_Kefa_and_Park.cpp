#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define nl endl
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fori(x, n) for(int i=x; i<n; i++)
#define presum if(i==0) psum[i]=arr[i]; else psum[i]=psum[i-1]+arr[i];

const int N=1e5+10;
vector<int> g[N];
bool vis[N];
int c=0, mxC=0;

int ans=0;
int m;
int arr[N];
int k=0;
void dfs(int v, int u, int c, int mxC){
    if(arr[v-1]) c++;
    else c=0;
    mxC=max(mxC, c);
    int childCount=0;
    for(int child: g[v]){
        if(child!=u){
            dfs(child, v, c, mxC);
            childCount++;
        }
    }
    if(mxC<=m && !childCount){
        ans++;
    }
}

void solve() {
    int n; cin>>n>>m;
    fori(0, n) cin>>arr[i];
    fori(0, n-1){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0, 0, 0);
    cout<<ans<<endl;
}

int main() {
    ll t=1;
    //cin >> t;
    while(t--) solve();
    return 0;
}