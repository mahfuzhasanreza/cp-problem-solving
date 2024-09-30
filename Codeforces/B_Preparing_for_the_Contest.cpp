#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    
    while(t--){
        int n, k;
        cin>>n>>k;

        int nn=n;
        for(int i=1; i<=n; i++){
            if(k>0){
                cout<<i<<" ";
                k--;
            } else{
                cout<<nn--<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}