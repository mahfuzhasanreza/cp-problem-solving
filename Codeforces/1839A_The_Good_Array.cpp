#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int res=(n+k-1)/k;
        if(n%k>1 || (n%k==0 && k>1)){
            res++;
        }

        cout<<res<<endl;
    }

    return 0;
}