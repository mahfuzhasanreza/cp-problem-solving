#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n, k; cin>>n>>k;
        int a[n];
        long long p=1;
        for(int i=0; i<n; i++){
            cin>>a[i];
            p*=a[i];
        }
        if(2023%p!=0){
            cout<<"NO"<<endl;
            continue;
        } else{
            cout<<"YES"<<endl;
            for(int i=0; i<k; i++){
                if(i==0) cout<<2023/p<<" ";
                else cout<<1<<" ";
            }
            cout<<endl;
        }
        
    }

    return 0;
}