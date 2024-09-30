#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int degree[n]={0};
        for(int i=0; i<n-1; i++){
            int u, v;
            cin>>u>>v;

            degree[u-1]++;
            degree[v-1]++;
        }

        int ans=count(degree, degree+n, 1);

        cout<<(ans+1)/2<<endl;
    }

    return 0;
}