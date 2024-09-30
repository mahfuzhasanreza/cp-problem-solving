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
    int n, a, b;
    cin>>n>>a>>b;
    int arr[n];
    int psum[n];
    fori(i, n)cin>>arr[i];
    sort(arr, arr+n);
    fori(i, n) presum

    ll mxSum=LLONG_MIN;
    for(int i=0; i<=a; i++){
        if(i==n){
            mxSum=max(0LL, mxSum);
            break;
        }

        ll canNegative=min(n-i, b);
        ll sum=psum[n-1-i];
        ll rem=psum[n-1-i-canNegative];
        if(n-1-i-canNegative<0) rem=0;

        sum-=2*(sum-rem);
        mxSum=max(mxSum, sum);
    }
    cout<<mxSum<<nl;
}

int main() {
    ll t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}